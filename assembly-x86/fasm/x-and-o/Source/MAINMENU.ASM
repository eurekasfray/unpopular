;=============================================================
; MAINMENU - DISPLAYS AN INTERACTIVE MENU
;
; This function contains a subfunction: DisplayHelp
;=============================================================
    ;----------------------------------------------------
    ; Clear screen and colour the background
    ;----------------------------------------------------
        call ClearScreen
        ; color overall background
        mov	al, SYS_COLOUR_MENU_BACKGROUND
        call FloodScreen

    ;----------------------------------------------------
    ; Render checkboard
    ;----------------------------------------------------
        mov	cx,4		   ; width of pattern
        mov	dx,4		   ; height of pattern
        mov	bh,4		   ; no. of horontal patterns
        mov	bl,4		   ; no. of vertical patterns
        mov	ah,1		   ; bg colour
        mov	al,2		   ; fg colour
        mov	[x_position],3	   ; x
        mov	[y_position],3	   ; y
        ;     call RenderCheckerboard
        ;     xor ax,ax
        ;     int 16h

    ;----------------------------------------------------
    ; Draw logo
    ;----------------------------------------------------
            mov al,17
            call FloodScreen
            ; draw icon: "TIC"
            mov cx,tic_text_width
            mov dx,tic_text_area
            mov [x_position],130
            mov [y_position],40
            mov si,tic_text_splash
            call DrawSprite

            ; draw icon: "TAC"
            mov cx,tac_text_width
            mov dx,tac_text_area
            mov [x_position],165
            mov [y_position],72
            mov si,tac_text_splash
            call DrawSprite

            ; draw icon: "TOE"
            mov cx,toe_text_width
            mov dx,toe_text_area
            mov [x_position],200
            mov [y_position],104
            mov si,toe_text_splash
            call DrawSprite

    ;----------------------------------------------------
    ; Draw title at the bottom
    ;----------------------------------------------------
        ; draw text background
        mov cx,235
        mov dx,45
        mov [x_position],85
        mov [y_position],155
        mov [pixel_colour],0
        call FillRect

        ; print name under logo - text: "Tic-Tac-Toe"
        mov	  al,FONT_UGLY
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],155
        mov	  [y_position],157
        mov	  si,_title1
        call   DrawText

        ;  print version - text: "Version 1.0 alpha"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],124
        mov	  [y_position],190
        mov	  si,_version
        call   DrawText
    ;----------------------------------------------------
    ; Draw topbar
    ;----------------------------------------------------
	   mov cx,255
	   mov dx,15
	   mov [x_position],0
	   mov [y_position],0
	   mov [pixel_colour],0
	   call FillRect
	   mov cx,65
	   mov dx,15
	   mov [x_position],255
	   mov [y_position],0
	   mov [pixel_colour],0
	   call FillRect
; draw text: "MAIN MENU"
	   mov	  al,FONT_UGLY
	   mov	  [font_colour],COLOUR_BRIGHT_WHITE
	   mov	  [x_position],122
	   mov	  [y_position],3
	   mov	  si,_menuheader
	   call   DrawText

    ;----------------------------------------------------
    ; Draw sidebar
    ;----------------------------------------------------
; draw background bar
	   mov cx,100
	   mov dx,185
	   mov [x_position],0
	   mov [y_position],15
	   mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
	   call FillRect
; draw dark fade
	   mov cx,100
	   mov [x_position],0
	   mov [y_position],15
	   mov [pixel_colour],176
	   call DrawHorizLine
	   mov cx,100
	   mov [x_position],0
	   mov [y_position],16
	   mov [pixel_colour],177
	   call DrawHorizLine

; draw bar at the end of all menuitems
	   mov cx,85
	   mov [x_position],3
	   mov [y_position],70
	   mov [pixel_colour],1
	   call DrawHorizLine

; draw menuitem cursor background - points to the first item
	   mov cx,83
	   mov dx,13
	   mov [x_position],2
	   mov [y_position],23
	   mov [pixel_colour],1
	   call FillRect

; "New Game"
	   mov	  al,FONT_GL
	   mov	  [font_colour],COLOUR_BRIGHT_WHITE
	   mov	  [x_position],5
	   mov	  [y_position],25
	   mov	  si,_menuitem1
	   call   DrawText
; "Help"
	   mov	  al,FONT_GL
	   mov	  [font_colour],COLOUR_BRIGHT_WHITE
	   mov	  [x_position],5
	   mov	  [y_position],41
	   mov	  si,_menuitem2
	   call   DrawText
; "Exit"
	   mov	  al,FONT_GL
	   mov	  [font_colour],COLOUR_BRIGHT_WHITE
	   mov	  [x_position],5
	   mov	  [y_position],57
	   mov	  si,_menuitem3
	   call   DrawText

; initialize current item
	   mov [current_item],1
     ;----------------------------------------------------
     ; Virtual keys
     ;----------------------------------------------------
     select_item:
; get key (scan code)
	   mov	  ax,ax
	   mov	  ah,0x10
	   int	  0x16

; check for program virtual keys
	   cmp	  al,VK_RETURN
	   je	  run_selected_item
	   cmp	  al,VK_SPACE
	   je	  run_selected_item
	   cmp	  ax,VK_UP
	   je	  item_move_up
	   cmp	  ax,VK_RIGHT
	   je	  item_move_right
	   cmp	  ax,VK_DOWN
	   je	  item_move_down
	   cmp	  ax,VK_LEFT
	   je	  item_move_left
	   jmp	  select_item

;--------------------------------------------------------------

;----------------------------------------------------
; Virtual keys functions
;----------------------------------------------------
run_selected_item:
        cmp [current_item],1
        je .new_game
        cmp [current_item],2
        je .help
        cmp [current_item],3
        je exit
        jmp select_item

    ;----------------------------------------------------
    .new_game:
	  jmp exit_function		     ; exit to play game
    ;----------------------------------------------------
    .help:
	   call RenderBlackWhite	     ; render black&white screen
	   call DisplayHelp		     ; put help info on screen
	   jmp MainMenu 		     ; recolour menu screen
     ;----------------------------------------------------
exit:
        ; render screen black&white
        call RenderBlackWhite

        ; inform user that program has ended by displaying a message
        ; put message box
        mov cx,148
        mov dx,65
        mov [x_position],86
        mov [y_position],65
        mov [pixel_colour],0
        call FillRect
        ; outline message box
        mov cx,148
        mov dx,65
        mov [x_position],86
        mov [y_position],65
        mov [pixel_colour],2
        call DrawBox

        ; draw text shadow
        mov	  al,FONT_GL
        mov	  [font_colour],17
        mov	  [x_position],103
        mov	  [y_position],77
        mov	  si,_are_you_sure
        call   DrawText
        ; draw text: "Are you sure?"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_LIGHT_BLUE
        mov	  [x_position],101
        mov	  [y_position],75
        mov	  si,_are_you_sure
        call   DrawText
        ; draw text: "YES or NO"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_LIGHT_RED
        mov	  [x_position],117
        mov	  [y_position],95
        mov	  si,_yes_or_no
        call   DrawText
	.get_choice:
        ; get choice (yes or no)
        xor	  ax,ax
        mov	  ah,0x10
        int	  0x16
        ; is choice yes?
        cmp	  ax,'Y'
        je	  .yes
        cmp	  al,'y'
        je	  .yes
        cmp	  al,VK_SPACE
        je	  .yes
        cmp	  al,VK_RETURN
        je	  .yes
        ; is choice no?
        cmp	  al,'N'
        je	  .no
        cmp	  al,'n'
        je	  .no
        cmp	  al,VK_ESCAPE
        je	  .no
        jmp	  .get_choice

	.no:
        ; clear are are-you-sure text
        mov cx,220
        mov dx,45
        mov [x_position],100
        mov [y_position],155
        mov [pixel_colour],0
        call FillRect
        ; and then print title
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],150
        mov	  [y_position],157
        mov	  si,_title1
        call   DrawText
        jmp MainMenu

	.yes:
        ; return from function
        mov [exit_flag],1
        ret
    ;----------------------------------------------------

exit_function:
        ; this is the exit to start a new game
        ; note: exit_flag is not set to TRUE here
        ret

;----------------------------------------------------
; Navigation
;----------------------------------------------------
item_move_up:
        cmp [current_item],1
        je .move_to_item3
        cmp [current_item],2
        je .move_to_item1
        cmp [current_item],3
        je .move_to_item2
        jmp select_item

    .move_to_item3:
        ; clear the cursor at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 1 text: "New Game"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],25
        mov	  si,_menuitem1
        call   DrawText
        ; clear the area at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 3
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],57
        mov	  si,_menuitem3
        call   DrawText
        ; update current item to item 3
        mov [current_item],3
        jmp select_item

    .move_to_item1:
        ; clear the cursor at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 2 text: "Help"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],41
        mov	  si,_menuitem2
        call   DrawText
        ; clear the area at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 1
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],25
        mov	  si,_menuitem1
        call   DrawText
        ; update current item to item 1
        mov [current_item],1
        jmp select_item

    .move_to_item2:
        ; clear the cursor at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 3 text: "Exit"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],57
        mov	  si,_menuitem3
        call   DrawText
        ; clear the area at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 2
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],41
        mov	  si,_menuitem2
        call   DrawText
        ; update current item to item 2
        mov [current_item],2
        jmp select_item

;----------------------------------------------------
item_move_down:
        cmp [current_item],1
        je .move_to_item2
        cmp [current_item],2
        je .move_to_item3
        cmp [current_item],3
        je .move_to_item1
        jmp select_item

    .move_to_item2:
        ; clear the cursor at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 1 text: "New Game"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],25
        mov	  si,_menuitem1
        call   DrawText
        ; clear the area at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 2
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],41
        mov	  si,_menuitem2
        call   DrawText
        ; update current item to item 2
        mov [current_item],2
        jmp select_item

    .move_to_item3:
        ; clear the cursor at item 2
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],39
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 2 text: "Help"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],41
        mov	  si,_menuitem2
        call   DrawText
        ; clear the area at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 3
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],57
        mov	  si,_menuitem3
        call   DrawText
        ; update current item to item 3
        mov [current_item],3
        jmp select_item

    .move_to_item1:
        ; clear the cursor at item 3
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],55
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; reprint menuitem 3 text: "Exit"
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],57
        mov	  si,_menuitem3
        call   DrawText
        ; clear the area at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],SYS_COLOUR_MENU_SIDEBAR
        call FillRect
        ; put cursor at item 1
        mov cx,83
        mov dx,13
        mov [x_position],2
        mov [y_position],23
        mov [pixel_colour],1
        call FillRect
        ; display text over cursor at item 1
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],5
        mov	  [y_position],25
        mov	  si,_menuitem1
        call   DrawText
        ; update current item to item 1
        mov [current_item],1
        jmp select_item

       ;----------------------------------------------------
item_move_right:
        ; this action is the same as item_move_down
        jmp item_move_down

     ;----------------------------------------------------
item_move_left:
        ; this action is the same as item_move_up
        jmp item_move_up



;=============================================================
; DISPLAYHELP - DISPLAYS HELP INFORMATION TO THE PLAYER
;
; This function is called by the code in MainMenu.Asm
;=============================================================
DisplayHelp:
        ; put message box
        mov cx,255
        mov dx,150
        mov [x_position],33
        mov [y_position],25
        mov [pixel_colour],0
        call FillRect
        ; outline message box
        mov cx,255
        mov dx,150
        mov [x_position],33
        mov [y_position],25
        mov [pixel_colour],2
        call DrawBox
        ; display message: "Keys used"
        mov	  al,FONT_GL
        mov	  [font_colour],35
        mov	  [x_position],36
        mov	  [y_position],30
        mov	  si,_helpline1
        call   DrawText
        ;
        ; display up arrow with a gap between the top text
        mov	  cx,uparrow_width
        mov	  dx,uparrow_area
        mov	  [x_position],49
        mov	  [y_position],50
        mov	  si,uparrow
        call DrawSprite
        ; display text on the same line with the arrow
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],50
        mov	  si,_helpline2
        call   DrawText
        ; display right arrow
        mov	  cx,uparrow_width
        mov	  dx,uparrow_area
        mov	  [x_position],49
        mov	  [y_position],60
        mov	  si,rightarrow
        call DrawSprite
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],60
        mov	  si,_helpline3
        call   DrawText
        ; display down arrow
        mov	  cx,uparrow_width
        mov	  dx,uparrow_area
        mov	  [x_position],49
        mov	  [y_position],70
        mov	  si,downarrow
        call DrawSprite
        ; display help message
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],70
        mov	  si,_helpline4
        call   DrawText
        ; display left arrow
        mov	  cx,uparrow_width
        mov	  dx,uparrow_area
        mov	  [x_position],49
        mov	  [y_position],80
        mov	  si,leftarrow
        call DrawSprite
        ; display help message
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],80
        mov	  si,_helpline5
        call   DrawText
        ; display help message
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],90
        mov	  si,_helpline6
        call   DrawText
        ; display help message
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_BRIGHT_WHITE
        mov	  [x_position],36
        mov	  [y_position],100
        mov	  si,_helpline7
        call   DrawText
        ; display developed-by message
        mov	  al,FONT_GL
        mov	  [font_colour],COLOUR_WHITE
        mov	  [x_position],40
        mov	  [y_position],165
        mov	  si,_helpline8
        call   DrawText
        ; wait for keypress
        xor ax,ax
        int 16h
        ret
