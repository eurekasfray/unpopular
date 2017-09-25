
;=============================================================
; GetWinner - check for winning patterns from block_array
;
; In/Out:     [nothing]
;=============================================================
  GetWinner:
	   push ax bx
;   check for patterns for players
   .check_pattern_1:
	   xor ax,ax
;          do look up for the 1st element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,0						       ; al = index for 1st element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 1st element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,1						       ; al = index for 2nd element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 1st element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,2						       ; al = index for 3rd element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3
	   jne @f
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,2,3
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],2
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6
	   jb .check_pattern_2
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,2,3
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],2
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_2:
;          clear some values from previous pattern
;
	   xor ax,ax
;          do look up for the 4th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,3						       ; al = index for 4th element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 5th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,4						       ; al = index for 5th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 6th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,6						       ; al = index for 6th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 4,5,6
	   mov [current_block],4
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],6
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_3	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 4,5,6
	   mov [current_block],4
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],6
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_3:
	   xor ax,ax
;          do look up for the 7th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,6						       ; al = index for 7th element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 8th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,7						       ; al = index for 8th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 9th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,8						       ; al = index for 9th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 7,8,9
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],8
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_4	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 7,8,9
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],8
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return


;   check for patterns for players
   .check_pattern_4:
	   xor ax,ax
;          do look up for the 1th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,0						      ; al = index for 1th element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 4th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,3						       ; al = index for 4th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 7th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,6						       ; al = index for 7th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,4,7
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],4
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_5	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,4,7
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],4
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_5:
	   xor ax,ax
;          do look up for the 2nd element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,1						       ; al = index for 1nd element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 5th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,4						       ; al = index for 5th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 8th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,7						       ; al = index for 8th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 2,5,8
	   mov [current_block],2
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],8
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_6	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 2,5,8
	   mov [current_block],2
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],8
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_6:
	   xor ax,ax
;          do look up for the 3rd element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,2						       ; al = index for 3rd element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 6th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,5						       ; al = index for 6th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 9th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,8						       ; al = index for 9th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 3,6,9
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],6
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_7	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 3,6,9
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],6
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_7:
	   xor ax,ax
;          do look up for the 1st element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,0						       ; al = index for 1st element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 5th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,4						       ; al = index for 5th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 9th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,8						       ; al = index for 9th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,5,9
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .check_pattern_8	       ; if not, go check the next pattern
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 1,5,9
	   mov [current_block],1
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],9
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;   check for patterns for players
   .check_pattern_8:
	   xor ax,ax
;          do look up for the 3rd element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,2						       ; al = index for 3rd element
	   xlatb						       ; do lookup
	   mov [first_block],al 				       ; store it
;          do look up for the 5th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,4						       ; al = index for 5th element
	   xlatb						       ; do lookup
	   mov [second_block],al				       ; store it
;          do look up for the 7th element
	   mov bx,block_array					       ; load block_array address into bx
	   mov al,6						       ; al = index for 7th element
	   xlatb						       ; do lookup
	   mov [third_block],al 				       ; store it

;          check for winner
;          player 1 wins if 1st,2nd,3rd blocks variables all add to 3 since 1+1+1=3
;          player 2 wins if 1st,2nd,3rd blocks variables all add to 6 since 2+2+2=6
	   xor ax,ax
;          sum extracted values
	   add al,[first_block]
	   add al,[second_block]
	   add al,[third_block]

;          check for winning player
;          check player 1
	   cmp al,3			; is player 1 winner?
	   jne @f			; if not, check player 2
	   mov [winner],1
	   mov [end_of_game_flag],1
;          highlight the winning blocks 3,5,7
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return
;          check player 2
       @@:
	   cmp al,6			; is player 2 winner?
	   jb .no_winner	       ; if not, then the game is draw
	   mov [winner],2
	   mov [end_of_game_flag],1
;          highlight the winning blocks 3,5,7
	   mov [current_block],3
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],5
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   mov [current_block],7
	   call GetBlockLocation
	   mov	  cx,BLOCK_WIDTH
	   mov	  dx,BLOCK_HEIGHT
	   call FillRect
	   jmp .return

;          no winner found. the game is scrambled