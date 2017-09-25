        call ClearScreen

        ; flood screen with dark green
        mov al,237
	    call FloodScreen

    ;----------------------------------------------------
    ; Draw play area
    ;----------------------------------------------------
        ; draw shadow of rectangle around play area
	    mov cx,150
	    mov dx,130
	    mov [x_position],85
	    mov [y_position],40
	    mov [pixel_colour],234
	    call FillRect

        ; draw a <color> rectangle around play area
        mov cx,150
        mov dx,130
        mov [x_position],80
        mov [y_position],35
        mov [pixel_colour],0
        call FillRect

        ; outline play area
        mov	  cx,150
        mov	  dx,130
        mov	  [x_position],80
        mov	  [y_position],35
        mov	  [pixel_colour],2
        call   DrawBox

    ;----------------------------------------------------
    ; Draw grid
    ;----------------------------------------------------
        ; get coordinates to center grid
        mov	  [x_position],320/2
        mov	  [y_position],200/2
        sub	  [x_position],50
        sub	  [y_position],40

        ;  mov dx,meshnix_splash_area
        ;  mov cx,meshnix_splash_width
        ;  mov si,meshnix_splash
        ;  call DrawSprite

        ; draw grid (3x3)
        mov	  [pixel_colour],COLOUR_GRAY
        mov	  si,grid_directions
        call   DrawGrid

    ;----------------------------------------------------
    ; Draw background for text that shows player's turn
    ; and background for title
    ;----------------------------------------------------
        ; draw current player display background
	    mov cx,20
	    mov dx,21
	    mov [x_position],0
	    mov [y_position],20
	    mov [pixel_colour],0
	    call FillRect

    ;-----------------------------------------------------
    ; Draw TIC TAC TOE icon
    ;-----------------------------------------------------
        ; draw icon: "TIC"
        mov cx,tic_text_width
        mov dx,tic_text_area
        mov [x_position],10
        mov [y_position],1
        mov si,tic_text_splash
        call DrawSprite

        ; draw icon: "TAC"
        mov cx,tac_text_width
        mov dx,tac_text_area
        mov [x_position],110
        mov [y_position],1
        mov si,tac_text_splash
        call DrawSprite

        ; draw icon: "TOE"
        mov cx,toe_text_width
        mov dx,toe_text_area
        mov [x_position],220
        mov [y_position],1
        mov si,toe_text_splash
        call DrawSprite

    ;----------------------------------------------------
    ; Draw strings
    ;----------------------------------------------------
        ; "XAN"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],141
        mov	  [y_position],40
        mov	  si,_logo
        call   DrawText

        ; "1P"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_LIGHT_RED
        mov	  [x_position],1
        mov	  [y_position],20
        mov	  si,_p1_msg
        call   DrawText

        ; "P2"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_DARK_GRAY
        mov	  [x_position],1
        mov	  [y_position],31
        mov	  si,_p2_msg
        call   DrawText

        ; "Player1"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],124
        mov	  [y_position],150
        mov	  si,_player_1
        call   DrawText

        ; "Cross and Nix version 1.0a" shadow
        ;    mov    [font_colour],234
        ;    mov    [x_position],17
        ;    mov    [y_position],7
        ;    mov    si,_title
        ;    call   DrawText

        ; the game starts at block 5. Setup block 5 and relative variables.
        ; setup block_array index, current_block and current_player variables
        mov	  [current_player],1
        mov	  [current_block],5
        mov	  [index],5
        ; fill block 5 with gray. It is the cursor.
        mov	  [x_position],BLOCK_5_X
        mov	  [y_position],BLOCK_5_Y
        mov	  cx,BLOCK_WIDTH
        mov	  dx,BLOCK_HEIGHT
        mov	  [pixel_colour],COLOUR_WHITE
        call   FillRect

        jmp start

;--------------------------------------------------------
; Start of game and main loop
;--------------------------------------------------------
check_end_of_game:
        ; is this the end of the game?
        cmp	  [end_of_game_flag],1
	    jne	  start 		 ; if not then continue game
        ; else print winner text
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],115
        mov	  [y_position],175
        mov	  si,_winner
        call   DrawText
        ; wait for key press
        xor	  ax,ax
        int	  0x16
        ; return from the function
        ret

start:
        ; get key (scan code)
        mov	  ax,ax
        mov	  ah,0x10
        int	  0x16

        ; check for program virtual keys
        cmp	  al,VK_SPACE
        je	  mark_block
        cmp	  ax,VK_UP
        je	  move_up
        cmp	  ax,VK_RIGHT
        je	  move_right
        cmp	  ax,VK_DOWN
        je	  move_down
        cmp	  ax,VK_LEFT
        je	  move_left
        cmp	  al,VK_ESCAPE
        je	  gameplay_exit
        jmp	  start

;--------------------------------------------------------
; Virtual keys & navigation functions
;--------------------------------------------------------
mark_block:
        ; is block already marked? check to see! if it is then do nothing.
        call   GetBlockLocation
        call   GetPixel
        cmp	  [old_pixel_colour],COLOUR_LIGHT_RED
        je	  start
        cmp	  [old_pixel_colour],COLOUR_LIGHT_BLUE
        je	  start
        ; if blocks not mark then, mark according to current player.
        cmp	  [current_player],1
        je	  .mark_player_1
        cmp	  [current_player],2
        je	  .mark_player_2
        jmp	  start

    .mark_player_1:
        ; assign status to block_array
        xor	  bx,bx
        mov	  al,[current_player]
        mov	  bl,[current_block]
        sub	  bl,1
        mov	  byte[block_array+bx],al
        ; change current player to player 2
	    mov	  [current_player],2
        ; clear player text - clear the player number
        mov	  cx,7
        mov	  dx,9
        mov	  [x_position],184
        mov	  [y_position],150
        mov	  [pixel_colour],0
        call   FillRect
        ; display change of player to player 2
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],124
        mov	  [y_position],150
        mov	  si,_player_2
        call   DrawText
        ; toggle 1P & 2P colours on screen
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_DARK_GRAY
        mov	  [x_position],1
        mov	  [y_position],1
        mov	  si,_p1_msg
        call   DrawText
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_LIGHT_BLUE
        mov	  [x_position],1
        mov	  [y_position],11
        mov	  si,_p2_msg
        call   DrawText

        ; assign colour player to block
        call   GetBlockLocation
        mov	  cx,BLOCK_WIDTH
        mov	  dx,BLOCK_HEIGHT
        mov	  [pixel_colour],COLOUR_LIGHT_RED
        call   FillRect

        ; check for winner
        call   GetWinner
        jmp	  check_end_of_game

    .mark_player_2:
        ; assign status to block_array
        xor	  bx,bx
        mov	  al,[current_player]
        mov	  bl,[current_block]
        sub	  bl,1
        mov	  byte[block_array+bx],al
        ; change current player to player 1
        mov	  [current_player],1
        ; clear player text - clear the player number
        mov	  cx,7
        mov	  dx,9
        mov	  [x_position],184
        mov	  [y_position],150
        mov	  [pixel_colour],0
        call   FillRect
        ; display change of player to player 1
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],124
        mov	  [y_position],150
        mov	  si,_player_1
        call   DrawText
        ; toggle 1P & 2P colours on screen
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_LIGHT_RED
        mov	  [x_position],1
        mov	  [y_position],1
        mov	  si,_p1_msg
        call   DrawText
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_DARK_GRAY
        mov	  [x_position],1
        mov	  [y_position],11
        mov	  si,_p2_msg
        call   DrawText

        ; assign colour player to block
        call   GetBlockLocation
        mov	  cx,BLOCK_WIDTH
        mov	  dx,BLOCK_HEIGHT
        mov	  [pixel_colour],COLOUR_LIGHT_BLUE
        call   FillRect

        ; check for winner
        call   GetWinner
        jmp	  check_end_of_game

move_up:
        ; move_up doesn't check block 1,2 or 3 for movement
        ; because they they cursor cannot go up at those points
        cmp	  [current_block],1
        je	  start
        cmp	  [current_block],2
        je	  start
        cmp	  [current_block],3
        je	  start
        ;
        ; this block of code fills the block that player moved
        ; from with a old colour
        call FillBlockForColour

    .check_cursor_movement:
        ; check blocks 2,5,6,7,8,9 for upwards movement.
        cmp	  [current_block],4
        je	  .move_up_to_block_1
        cmp	  [current_block],5
        je	  .move_up_to_block_2
        cmp	  [current_block],6
        je	  .move_up_to_block_3
        cmp	  [current_block],7
        je	  .move_up_to_block_4
        cmp	  [current_block],8
        je	  .move_up_to_block_5
        cmp	  [current_block],9
        je	  .move_up_to_block_6
        jmp	  start

    .move_up_to_block_1:
        mov	  [current_block],1
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_up_to_block_2:
        mov	  [current_block],2
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_up_to_block_3:
        mov	  [current_block],3
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_up_to_block_4:
        mov	  [current_block],4
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_up_to_block_5:
        mov	  [current_block],5
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_up_to_block_6:
        mov	  [current_block],6
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start

move_right:
        ; move_right doesn't check block 3,6 or 9 for movement
        ; because they they cursor cannot go up at those points
        cmp	  [current_block],3
        je	  start
        cmp	  [current_block],6
        je	  start
        cmp	  [current_block],9
        je	  start
        ;
        ; this block of code fills the block that player moved
        ; from with a old colour
        call   FillBlockForColour

    .check_cursor_movement:
        ; check blocks 1,2,4,5,7,8 for rightwards movement.
        cmp	  [current_block],1
        je	  .move_right_to_block_2
        cmp	  [current_block],2
        je	  .move_right_to_block_3
        cmp	  [current_block],4
        je	  .move_right_to_block_5
        cmp	  [current_block],5
        je	  .move_right_to_block_6
        cmp	  [current_block],7
        je	  .move_right_to_block_8
        cmp	  [current_block],8
        je	  .move_right_to_block_9
        jmp	  start

    .move_right_to_block_2:
        mov	  [current_block],2
        call   GetBlockLocation
        call   FillBlockForColour
        jmp start
    .move_right_to_block_3:
        mov	  [current_block],3
        call   GetBlockLocation
        call   FillBlockForColour
        jmp start
    .move_right_to_block_5:
        mov	  [current_block],5
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_right_to_block_6:
        mov	  [current_block],6
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_right_to_block_8:
        mov	  [current_block],8
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_right_to_block_9:
        mov	  [current_block],9
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start

move_down:
        ; move_down doesn't check block 7,8 or 9 for movement
        ; because they they cursor cannot go up at those points
        cmp	  [current_block],7
        je	  start
        cmp	  [current_block],8
        je	  start
        cmp	  [current_block],9
        je	  start
        ;
        ; this block of code fills the block that player moved
        ; from with a old colour
        call   FillBlockForColour

    .check_cursor_movement:
        ; check blocks 1,2,3,4,5,6 for upwards movement.
        cmp	  [current_block],1
        je	  .move_down_to_block_4
        cmp	  [current_block],2
        je	  .move_down_to_block_5
        cmp	  [current_block],3
        je	  .move_down_to_block_6
        cmp	  [current_block],4
        je	  .move_down_to_block_7
        cmp	  [current_block],5
        je	  .move_down_to_block_8
        cmp	  [current_block],6
        je	  .move_down_to_block_9
        jmp	  start

    .move_down_to_block_4:
        mov	  [current_block],4
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_down_to_block_5:
        mov	  [current_block],5
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_down_to_block_6:
        mov	  [current_block],6
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_down_to_block_7:
        mov	  [current_block],7
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_down_to_block_8:
        mov	  [current_block],8
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_down_to_block_9:
        mov	  [current_block],9
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start

move_left:
        ; move_left doesn't check block 1,4 or 7 for movement
        ; because they they cursor cannot go up at those points
        cmp	  [current_block],1
        je	  start
        cmp	  [current_block],4
        je	  start
        cmp	  [current_block],7
        je	  start
        ;
        ; this block of code fills the block that player moved
        ; from with a old colour
        call   FillBlockForColour

    .check_cursor_movement:
        ; check blocks 2,3,5,6,8,9 for upwards movement.
        cmp	  [current_block],2
        je	  .move_left_to_block_1
        cmp	  [current_block],3
        je	  .move_left_to_block_2
        cmp	  [current_block],5
        je	  .move_left_to_block_4
        cmp	  [current_block],6
        je	  .move_left_to_block_5
        cmp	  [current_block],8
        je	  .move_left_to_block_7
        cmp	  [current_block],9
        je	  .move_left_to_block_8
        jmp	  start

    .move_left_to_block_1:
        mov	  [current_block],1
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_left_to_block_2:
        mov	  [current_block],2
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_left_to_block_4:
        mov	  [current_block],4
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_left_to_block_5:
        mov	  [current_block],5
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_left_to_block_7:
        mov	  [current_block],7
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start
    .move_left_to_block_8:
        mov	  [current_block],8
        call   GetBlockLocation
        call   FillBlockForColour
        jmp	  start

gameplay_exit:
        ; exit gameplay function
        ret
