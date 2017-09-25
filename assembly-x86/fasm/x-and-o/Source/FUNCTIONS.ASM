; XAN Functions - version Alpha 0

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                                                             ;;
;;                     GRAPHIC SUBROUTINES                     ;;
;;                                                             ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;
;=============================================================
; PutPixel - puts a dot to screen at coordinates X and Y
;
; In:
;       colour     - pixel colour
;       x_position - column
;       y_position - row
;=============================================================
PutPixel:
        mov ah,0Ch
        mov al,[pixel_colour]
        mov bh,0
        mov cx,[x_position]
        mov dx,[y_position]
        int 10h
        ret



;=============================================================
; GetPixel - collects a pixel from given coordinates
;
; In:
;       x_position - column
;       y_position - row
;
; Out:
;       old_pixel_colour - colour read
;=============================================================
GetPixel:
        push ax bx cx dx
        mov ah,0Dh
        mov bh,0
        mov cx,[x_position]
        mov dx,[y_position]
        int 10h
        mov [old_pixel_colour],al
        pop dx cx bx ax
        ret



;=============================================================
; ClearScreen - clears screen, by painting it with pixels
;
; In/Out: [nothing]
;=============================================================
ClearScreen:
        push ax di cx
        xor ax,ax			              ; colour = 0 = black
        xor di,di			              ; initiate dx = 0
        mov cx,SCREEN_WIDTH*SCREEN_HEIGHT ; cx = 320*200 = 640000
        rep stosw			              ; set di=ax, for di = 1 to 64000
        pop cx di ax
        ret



;=============================================================
; FloodScreen - floods the screen with the given colour
;
; In:
;       al - colour
; Out:
;       [nothing]
;=============================================================
FloodScreen:
        push di cx
        mov ah,al
 	    xor di,di
        mov cx,SCREEN_WIDTH*SCREEN_HEIGHT
        rep stosw
        pop cx di
        ret



;=============================================================
; GotoLocation - goes to a given location.
;
; In:
;       x_position - column
;       y_position - row
;
; Out:  ax - location (in length)
;=============================================================
GotoLocation:
        ; formula to get location: {y(k+1)+x} or {(y*k)+y+x}
        ; x = x_position value
        ; y = _y_position value
        ; k = SCREEN_WIDTH
        push cx

        mov ax,[y_position]		    ; value to multiply
        mov cx,SCREEN_WIDTH		    ; multiplier value
    @@:
        ; multiply Y by 320 {ax=ax*cx}=={ax=_y_position*SCREEN_WIDTH}
        add ax,ax
        dec cx
        jnz @b

        ; add Y to ax {ax=ax+_y_position}
        add ax,[y_position]

        ; add X to ax {ax=ax+x_position}
        add ax,[x_position]

        pop cx
        ret



;=============================================================
; DrawGridLineUp - draws a line upwards vertically
;
; In:
;       x_position - column
;=============================================================
DrawGridLineUp:
        mov [counter],LINE_LENGTH
    @@:
        call PutPixel
        sub [x_position],SCREEN_WIDTH
        dec [counter]
        jnz @b              ; jump if _counter <> = 0
        ret                 ; else, exit function



;=============================================================
; DrawGridLineDown - draws a line downwards vertically
;
; In:
;       x_position - column
;=============================================================
DrawGridLineDown:
        mov [counter],LINE_LENGTH
    @@:
        call PutPixel
        add [x_position],SCREEN_WIDTH
        dec [counter]
        jnz @b              ; jump if _counter <> = 0
        ret                 ; else, exit function



;=============================================================
; DrawGridLineRight - draws a line rightwards horizontally
;
; In:
;       x_position - column
;=============================================================
DrawGridLineRight:
        mov [counter],LINE_LENGTH+10
    @@:
        call PutPixel
        inc [x_position]
        dec [counter]
        jnz @b			    ; jump if _counter <> = 0
        ret				    ; else, exit function



;=============================================================
; DrawGridLineLeft - draws a line leftwards horizontally
;
; In:
;       x_position - column
;=============================================================
DrawGridLineLeft:
        mov [counter],LINE_LENGTH+10
    @@:
        call PutPixel
        dec [x_position]
        dec [counter]
        jnz @b			    ; jump if _counter <> = 0
        ret				    ; else, exit function



;=============================================================
; DrawGrid - draws a grid direct by a sequence of turns
;
; In:
;          si - grid sequence
;=============================================================
DrawGrid:
        push ax bx
    .loop:
        mov al,[si]
        inc si
        or al,al
        jz .return

        mov bx,6			    ; _drawgrid_addr index counter (size: word)
        mov ah,4
    .check_for_direction:
        or ah,ah
        jz .loop
        cmp al,ah
        je @f
        dec ah
        sub bx,2
        jmp .check_for_direction
    @@:
        call [drawgrid_addr+bx]	   ; call a draw line function
        jmp .loop

    .return:
        pop bx ax
        inc si
        ret



;=============================================================
; DrawHorizLine - draws a horizontal line
;
; In:
;       cx - length of line
;       x_position - column
;=============================================================
DrawHorizLine:
        mov [counter],cx
    .loop:
        call PutPixel
        inc [x_position]
        dec [counter]
        jnz .loop			 ; jump if _counter <> = 0
        ret				     ; else, exit function


;=============================================================
; DrawVertLine - draws a vertical line
;
; In:
;       cx - length of line
;       x_position - column
;=============================================================
DrawVertLine:
        mov [counter],cx
    .loop:
        call PutPixel
        add [x_position],SCREEN_WIDTH
        dec [counter]
        jnz .loop			    ; jump if _counter <> = 0
        ret				        ; else, exit function



;=============================================================
; FileRect - draws a filled shape (defined by height*width)
;
; In:
;       cx - width of shape
;       dx - height of shape
;       x_position - column
;       y_position - row
;=============================================================
FillRect:
        push bx
        mov bx,cx                           ; save width in bx
        mov [row_counter],dx
    .loop:
        call DrawHorizLine
        add [x_position],SCREEN_WIDTH       ; goto next row
sub [x_position],bx                         ; do carriage return to start of cell
        mov cx,bx                           ; reset cx to original width
        dec [row_counter]
        jnz .loop                           ; jump if _row_counter <> = 0

        pop bx
        ret                                 ; else, exit function



;=============================================================
; DrawBox - draw an outline to screen                        ;
;                                                            ;
; In:                                                        ;
;                      cx - width                            ;
;                      dx - height                           ;
;                   x_pos - x coordinate                     ;
;                   y_pos - y coordinate                     ;
;                  colour - box (line) colour                ;
;                                                            ;
; Out:                [nothing]                              ;
;=============================================================
DrawBox:
        ; store necessary values
        push ax bx                      ; store registers
        mov  ax,[x_position]            ; store x coordinate for later use
        push dx                         ; save dx value
        push ax                         ; save value on the stack
        mov  bx,cx                      ; save value of dx in bx for later
        mov  cx,dx                      ; set cx = height
        call DrawVertLine               ; draw vertical line at length of cx
        mov  cx,bx                      ; restore cx's value to width
        call DrawHorizLine              ; draw horizontal line at length of cx
        pop  ax                         ; restore with in ax
        mov  [x_position],ax            ; reset original value of x_position (go back to start of initial line)
        mov  cx,bx                      ; set cx = height again
        call DrawHorizLine              ; draw horizontal line there
        pop  dx
        mov  cx,dx                      ; set cx = height
        call DrawVertLine               ; draw vertical line
        call PutPixel                   ; add 1 more pixel at the end of the box

        pop bx ax                       ; restore registers
        ret                             ; exit function

        mov ax,cx                       ; store width in ax
        mov bx,dx                       ; store height in bx
        mov cx,bx                       ; set cx = height
        ; draw left vertical line and then bottom horizontal line
        call DrawVertLine               ; draw vertical line
        mov cx,ax                       ; set cx = width
        call DrawHorizLine              ; draw horizontal line
        ; draw top horizontal line and then right vertical line
        pop [y_position]                ; restore y coordinate
        pop [x_position]                ; restore x coordinate
        mov cx,ax                       ; set cx = width
        call DrawHorizLine              ; draw horizontal line
        mov cx,bx                       ; set cx = height
        inc cx                          ; add 1 more pixel to height
        call DrawVertLine               ; draw vertical line
        ;
        pop bx ax                       ; restore registers
        ret                             ; exit function



;=============================================================
; DrawChar - draws an ASCII character from predefined graphics
;
; In:
;         area_counter = total area of font
;              counter = no. of pixels per row
;                   di = ASCII character graphics (font) data
;          font_colour = colour for font (character)
;
; Out: [nothing]
;=============================================================
; Note: 0xFF equals to the solid color of the pixel
;       0xFE equals to the transparent color of the pixel
;
;       This procedure inputs the following arguments:
;       + length of row
;       + area of the font
;       + the address font bitmap
;       + color of the font
;
;       This procedure works by printing each line of a pixel
;       until it the entire area of the bitmap has been printed.
;       This simply means that the length of each row is passed
;       in to the function and also is the area of the font.
;       So let's say that we have a font, and the dimension
;       of the font is 7*9 (width*height). This means that the
;       length of each row is 7, and the area is 7*9=63. Therefore,
;       the program will do a loop for 63 times, and for every 7
;       counts it while go to a new line and do a carriage return.
;       Once the loop passes 63 it while end, leaving a fully
;       displayed font to the screen. Note that the fonts must be
;       within the specified dimension else the font will not
;       display properly.
;
DrawChar:
        push ax			    ; save AX
        mov	bx,[counter]		    ; set BX the length of each row
    .loop:
        mov al,[di]			    ; extract pixel from DI
        inc di			    ; goto next pixel

        ; check for solid color
        cmp al,0xFF			    ; is AL = font pixel (solid color)
        jne @f			    ; if not then, skip next instruction
        mov al,[font_colour] 	    ; if so then, place font colour in AL to be painted
        jmp .putpixel		    ; go put solid color
        ; check for tranparent color
    @@: cmp al,0xFE			    ; is AL = transparent pixel (alpha color)
        jne .return			    ; if not then, skip next instruction
        call GetPixel		    ; get pixel from screen
        mov al,[old_pixel_colour]	    ; set AL = collected pixel
        ; and go put transparent colour
    .putpixel:
        mov [pixel_colour],al	    ; set pixel_colour equal solid colour or transparent colour
        dec [area_counter]		    ; decrement area_counter until it is zero
        cmp [area_counter],0 	    ; all pixels drawn? is area_counter = 0? If so, then exit function
        je .return

        call PutPixel		    ; put pixel
        inc [x_position]		    ; goto next x location
        dec [counter]		    ; decrement the line length (which is 7)
        cmp [counter],0		    ; 7 pixels drawn on this row? If so, then goto next row
        je @f
        jmp .loop
    @@:
        add [x_position],SCREEN_WIDTH    ; goto next row
        sub [x_position],bx		    ; do carriage return to start of cell
        mov [counter],7		    ; set _counter = 7 pixels to be drawn this row
        jmp .loop

    .return:
        pop ax
        inc di
        ret



;=============================================================
; DrawText - draws an ASCII string to screen
;
; In:
;          al - font type
;          si - ASCIIZ string
;          font_colour - colour for fonts
;          x_position - column
;          y_position - row
;
; Note:
;       Font types are: 1 = GLfont font
;                       2 = UGLY font
;=============================================================
DrawText:
        push ax bx

        ; check for a font type
        cmp al,1	    ;check for GL font
        je .gl_font
        cmp al,2	    ;check for UGLY font
        je .ugly_font
        cmp al,5	    ;check for BAREFACE font
        je .bareface_font
        jmp .gl_font     ; if font face was chosen then by default display GL font

    ;------------------------------------------------------------
    .gl_font:
    .gl_font.loop:
        ; get character
        mov al,[si]
        inc si
        or al,al
        jz .return
        xor bx,bx

    .gl_font.subloop:
        ; lookup character in table
        mov ah,[glfont_font_characters+bx]	       ; ah = _ascii_table[bx]. bx is index
        cmp al,ah
        je .gl_font.draw_char
        inc bx
        jmp .gl_font.subloop

    .gl_font.draw_char:
        ; get matching address for character's bitmap font
        add bx,bx			     ; bx = bx * 2. bx becomes index with word size.
        mov di,[glfont_font_addresses+bx]	    ; set data of corresponding font data into di
        mov [counter],7			    ; width dimension
        mov [area_counter],7*9+1		    ; area of font (width*height)+1
        call DrawChar

    ; goto next cell to draw next character
    .gl_font.advance_cell:
        sub [x_position],SCREEN_WIDTH*9  ; goto top of char cell
        add [x_position],7		   ; goto next char cell
        jmp .gl_font.loop

    .gl_font.return:
        pop bx ax
        inc si
        ret
    ;------------------------------------------------------------
    .ugly_font:
    .ugly_font.loop:
        ; get character
        mov al,[si]
        inc si
        or  al,al
        jz  .return
        xor bx,bx

    .ugly_font.subloop:
        ; lookup character in table
        mov ah,[ugly_font_characters+bx]	     ; ah = _ascii_table[bx]. bx is index
        cmp al,ah
        je  .ugly_font.draw_char
        inc bx
        jmp .ugly_font.subloop

    .ugly_font.draw_char:
        ; get matching address for character's bitmap font
        add bx,bx			     ; bx = bx * 2. bx becomes index with word size.
        mov di,[ugly_font_addresses+bx]	  ; set data of corresponding font data into di
        mov [counter],7			    ; width dimension
        mov [area_counter],7*9+1		    ; area of font (width*height)
        call DrawChar

    ; goto next cell to draw next character
    .ugly_font.advance_cell:
        sub [x_position],SCREEN_WIDTH*9  ; goto top of char cell
        add [x_position],8		  ; goto next char cell
        jmp .ugly_font.loop

    .return:
        pop bx ax
        inc si
        ret
    ;------------------------------------------------------------
    .bareface_font:
    .bareface_font.loop:
        ; get character
        mov al,[si]
        inc si
        or al,al
        jz .return
        xor bx,bx

    .bareface_font.subloop:
        ; lookup character in table
        mov ah,[bareface_font_characters+bx] 	 ; ah = _ascii_table[bx]. bx is index
        cmp al,ah
        je .bareface_font.draw_char
        inc bx
        jmp .bareface_font.subloop

    .bareface_font.draw_char:
        ; get matching address for character's bitmap font
        add bx,bx			     ; bx = bx * 2. bx becomes index with word size.
        mov di,[bareface_font_addresses+bx]	      ; set data of corresponding font data into di
        mov [counter],7			    ; width dimension
        mov [area_counter],7*11+1		     ; area of font (width*height)
        call DrawChar

    ; goto next cell to draw next character
    .bareface_font.advance_cell:
        sub [x_position],SCREEN_WIDTH*11  ; goto top of char cell
        add [x_position],7		  ; goto next char cell
        jmp .bareface_font.loop

    bareface.return:
        pop bx ax
        inc si
        ret



;=============================================================
; DrawSprite - draws sprites to screen
;
; In:
;       si - sprite data pointer
;       cx - width
;       dx - area size
;       x_position - column
;       y_position - row
;=============================================================
DrawSprite:
        push ax
        mov [area_counter],dx
        mov [counter],cx
        mov bx,cx

    .loop:
        mov al,[si]
        inc si

        cmp al,0xFF			     ; is al = alpha over
        jne .putpixel			   ; if not then, skip next instruction
        call GetPixel
        mov al,[old_pixel_colour]
        jmp .putpixel

    .putpixel:
        mov [pixel_colour],al
        dec [area_counter]
        cmp [area_counter],0 	    ; all pixels drawn? If so, then exit function
        je .return

        call PutPixel
        inc [x_position]
        dec [counter]
        cmp [counter],0		    ; 7 pixels drawn on this row? If so, then goto next row
        je @f
        jmp .loop
    @@:
        add [x_position],SCREEN_WIDTH    ; goto next row
        sub [x_position],bx		    ; do carriage return to start of cell
        mov [counter],bx		    ; set _counter = 7 pixels to be drawn this row
        jmp .loop

   .return:
        pop ax
        inc di
        ret
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

        call PutPixel
        dec [counter]
        jz .return

        inc [x_position]
        dec [row_counter]
        jnz .loop
        inc [y_position]
        mov [row_counter],cx
        jmp .loop

    ; .return:
        ret



;=============================================================
; RenderCheckerboard - draws a checkerboard pattern to screen
;
; In:
;          bh - number of horizontal patterns
;          bl - number of vertical patterns
;          cx - width of block pattern
;          dx - height of block pattern
;          ah - foreground pattern colour
;          al - background pattern colour
;          x_position - column
;          y_position - row
;=============================================================
RenderCheckerboard:
        ; initial function variables
        mov [chkbrd_width],cx
        mov [chkbrd_height],dx
        mov [chkbrd_fg_colour],ah
        mov [chkbrd_bg_colour],al
        mov [chkbrd_horiz_num],bh
        mov [chkbrd_vert_num],bl
        mov [chkbrd_fg_or_bg],0	  ; display foreground first
        mov ax,[x_position]
        mov bx,[y_position]
        mov [chkbrd_x],ax
        mov [chkbrd_y],bx

        xor ax,ax
        mov [counter],ax
        mov [counter],5

    .drawline:
    .is_it_fg_pattern:
        ;    cmp [chkbrd_fg_or_bg],0
        ;    jne .is_it_bg_pattern
        mov cx,[chkbrd_width]
        mov dx,[chkbrd_height]
        mov al,[chkbrd_fg_colour]
        mov [pixel_colour],al
        call FillRect
        inc [chkbrd_fg_or_bg]
        ;     jmp .continue
        mov ax,[chkbrd_width]
        mov bx,[chkbrd_height]
        add [x_position],ax
        sub [y_position],bx

    .is_it_bg_pattern:
        ;      cmp [chkbrd_fg_or_bg],1
        ;     jne .continue
        mov cx,[chkbrd_width]
        mov dx,[chkbrd_height]
        mov al,[chkbrd_bg_colour]
        mov [pixel_colour],al
        call FillRect
        dec [chkbrd_fg_or_bg]

    .continue:
        ; move to next pattern

        ;    dec [counter]
        ;    jnz .drawline
        ;end for_loop

    .exit:
        ; exit the function
        ret



;=============================================================
; RenderBlackWhite - renders a black and white screen
;
; In/Out: [nothing]
;
; Note: Here is a list of the BW colours used. The list runs
;       from dark to light
;       0,16,17,18,19,8,20,21,22,23,24,25,26,27,28,29,30,31,15
;       Each RGB colour has a matching BW colour
;
;       [I just wish the render could be done faster]
;=============================================================
RenderBlackWhite:
        push es di
        mov [x_position],0x0000
        mov [y_position],0x0000

    .getpixel:
        ; get pixel
        mov ah,0Dh
        mov bh,0
        mov cx,[x_position]
        mov dx,[y_position]
        int 10h

        ; check for corresponding BW pixels for RGB pixels
        cmp al,0
        je .put_0_pixel
        cmp al,1
        je .put_17_pixel
        cmp al,2
        je .put_22_pixel
        cmp al,3
        je .put_24_pixel
        cmp al,4
        je .put_18_pixel
        cmp al,5
        je .put_8_pixel
        cmp al,6
        je .put_22_pixel
        cmp al,7
        je .put_26_pixel
        cmp al,8
        je .put_8_pixel
        cmp al,9
        je .put_21_pixel
        cmp al,10
        je .put_27_pixel
        cmp al,11
        je .put_28_pixel
        cmp al,12
        je .put_21_pixel
        cmp al,13
        je .put_23_pixel
        cmp al,14
        je .put_30_pixel
        cmp al,15
        je .put_15_pixel
        cmp al,16
        je .put_16_pixel
        cmp al,17
        je .put_17_pixel
        cmp al,18
        je .put_18_pixel
        cmp al,19
        je .put_19_pixel
        cmp al,20
        je .put_20_pixel
        cmp al,21
        je .put_21_pixel
        cmp al,22
        je .put_22_pixel
        cmp al,23
        je .put_23_pixel
        cmp al,24
        je .put_24_pixel
        cmp al,25
        je .put_25_pixel
        cmp al,26
        je .put_26_pixel
        cmp al,27
        je .put_27_pixel
        cmp al,28
        je .put_28_pixel
        cmp al,29
        je .put_29_pixel
        cmp al,30
        je .put_30_pixel
        cmp al,31
        je .put_31_pixel
        cmp al,32
        je .put_17_pixel
        cmp al,33
        je .put_19_pixel
        cmp al,34
        je .put_20_pixel
        cmp al,35
        je .put_21_pixel
        cmp al,36
        je .put_23_pixel
        cmp al,37
        je .put_22_pixel
        cmp al,38
        je .put_21_pixel
        cmp al,39
        je .put_20_pixel
        cmp al,40
        je .put_8_pixel
        cmp al,41
        je .put_23_pixel
        cmp al,42
        je .put_25_pixel
        cmp al,43
        je .put_27_pixel
        cmp al,44
        je .put_29_pixel
        cmp al,45
        je .put_28_pixel
        cmp al,46
        je .put_26_pixel
        cmp al,47
        je .put_24_pixel
        cmp al,48
        je .put_25_pixel
        cmp al,49
        je .put_26_pixel
        cmp al,50
        je .put_26_pixel
        cmp al,51
        je .put_27_pixel
        cmp al,52
        je .put_27_pixel
        cmp al,53
        je .put_24_pixel
        cmp al,54
        je .put_22_pixel
        cmp al,55
        je .put_19_pixel
        cmp al,56
        je .put_25_pixel
        cmp al,57
        je .put_25_pixel
        cmp al,58
        je .put_25_pixel
        cmp al,59
        je .put_26_pixel
        cmp al,60
        je .put_27_pixel
        cmp al,61
        je .put_26_pixel
        cmp al,62
        je .put_25_pixel
        cmp al,63
        je .put_25_pixel
        cmp al,64
        je .put_26_pixel
        cmp al,65
        je .put_27_pixel
        cmp al,66
        je .put_28_pixel
        cmp al,67
        je .put_29_pixel
        cmp al,68
        je .put_31_pixel
        cmp al,69
        je .put_30_pixel
        cmp al,70
        je .put_29_pixel
        cmp al,71
        je .put_29_pixel
        cmp al,72
        je .put_28_pixel
        cmp al,73
        je .put_28_pixel
        cmp al,74
        je .put_28_pixel
        cmp al,75
        je .put_28_pixel
        cmp al,76
        je .put_28_pixel
        cmp al,77
        je .put_27_pixel
        cmp al,78
        je .put_26_pixel
        cmp al,79
        je .put_24_pixel
        cmp al,80
        je .put_27_pixel
        cmp al,81
        je .put_27_pixel
        cmp al,82
        je .put_28_pixel
        cmp al,83
        je .put_28_pixel
        cmp al,84
        je .put_28_pixel
        cmp al,85
        je .put_28_pixel
        cmp al,86
        je .put_28_pixel
        cmp al,87
        je .put_28_pixel
        cmp al,88
        je .put_28_pixel
        cmp al,89
        je .put_28_pixel
        cmp al,90
        je .put_29_pixel
        cmp al,91
        je .put_30_pixel
        cmp al,92
        je .put_30_pixel
        cmp al,93
        je .put_30_pixel
        cmp al,94
        je .put_30_pixel
        cmp al,95
        je .put_29_pixel
        cmp al,96
        je .put_29_pixel
        cmp al,97
        je .put_29_pixel
        cmp al,98
        je .put_29_pixel
        cmp al,99
        je .put_30_pixel
        cmp al,100
        je .put_30_pixel
        cmp al,101
        je .put_29_pixel
        cmp al,102
        je .put_29_pixel
        cmp al,103
        je .put_28_pixel
        cmp al,104
        je .put_16_pixel
        cmp al,105
        je .put_17_pixel
        cmp al,106
        je .put_18_pixel
        cmp al,107
        je .put_18_pixel
        cmp al,108
        je .put_19_pixel
        cmp al,109
        je .put_18_pixel
        cmp al,110
        je .put_18_pixel
        cmp al,111
        je .put_18_pixel
        cmp al,112
        je .put_18_pixel
        cmp al,113
        je .put_18_pixel
        cmp al,114
        je .put_19_pixel
        cmp al,115
        je .put_20_pixel
        cmp al,116
        je .put_23_pixel
        cmp al,117
        je .put_24_pixel
        cmp al,118
        je .put_23_pixel
        cmp al,119
        je .put_22_pixel
        cmp al,120
        je .put_22_pixel
        cmp al,121
        je .put_21_pixel
        cmp al,122
        je .put_21_pixel
        cmp al,123
        je .put_21_pixel
        cmp al,124
        je .put_21_pixel
        cmp al,125
        je .put_20_pixel
        cmp al,126
        je .put_19_pixel
        cmp al,127
        je .put_18_pixel
        cmp al,128
        je .put_21_pixel
        cmp al,129
        je .put_21_pixel
        cmp al,130
        je .put_22_pixel
        cmp al,131
        je .put_22_pixel
        cmp al,132
        je .put_23_pixel
        cmp al,133
        je .put_22_pixel
        cmp al,134
        je .put_22_pixel
        cmp al,135
        je .put_22_pixel
        cmp al,136
        je .put_22_pixel
        cmp al,137
        je .put_22_pixel
        cmp al,138
        je .put_23_pixel
        cmp al,139
        je .put_23_pixel
        cmp al,140
        je .put_24_pixel
        cmp al,141
        je .put_24_pixel
        cmp al,142
        je .put_23_pixel
        cmp al,143
        je .put_22_pixel
        cmp al,144
        je .put_23_pixel
        cmp al,145
        je .put_23_pixel
        cmp al,146
        je .put_23_pixel
        cmp al,147
        je .put_23_pixel
        cmp al,148
        je .put_23_pixel
        cmp al,149
        je .put_24_pixel
        cmp al,150
        je .put_24_pixel
        cmp al,151
        je .put_23_pixel
        cmp al,152
        je .put_22_pixel
        cmp al,153
        je .put_23_pixel
        cmp al,154
        je .put_23_pixel
        cmp al,155
        je .put_23_pixel
        cmp al,156
        je .put_23_pixel
        cmp al,157
        je .put_23_pixel
        cmp al,158
        je .put_23_pixel
        cmp al,159
        je .put_23_pixel
        cmp al,160
        je .put_23_pixel
        cmp al,161
        je .put_23_pixel
        cmp al,162
        je .put_24_pixel
        cmp al,163
        je .put_24_pixel
        cmp al,164
        je .put_25_pixel
        cmp al,165
        je .put_25_pixel
        cmp al,166
        je .put_25_pixel
        cmp al,167
        je .put_25_pixel
        cmp al,168
        je .put_24_pixel
        cmp al,169
        je .put_24_pixel
        cmp al,170
        je .put_24_pixel
        cmp al,171
        je .put_24_pixel
        cmp al,172
        je .put_24_pixel
        cmp al,173
        je .put_24_pixel
        cmp al,174
        je .put_23_pixel
        cmp al,175
        je .put_22_pixel
        cmp al,176
        je .put_16_pixel
        cmp al,177
        je .put_17_pixel
        cmp al,178
        je .put_17_pixel
        cmp al,179
        je .put_18_pixel
        cmp al,180
        je .put_18_pixel
        cmp al,181
        je .put_18_pixel
        cmp al,182
        je .put_18_pixel
        cmp al,183
        je .put_18_pixel
        cmp al,184
        je .put_17_pixel
        cmp al,185
        je .put_18_pixel
        cmp al,186
        je .put_19_pixel
        cmp al,187
        je .put_20_pixel
        cmp al,188
        je .put_22_pixel
        cmp al,189
        je .put_21_pixel
        cmp al,190
        je .put_20_pixel
        cmp al,191
        je .put_19_pixel
        cmp al,192
        je .put_20_pixel
        cmp al,193
        je .put_20_pixel
        cmp al,194
        je .put_20_pixel
        cmp al,195
        je .put_20_pixel
        cmp al,196
        je .put_21_pixel
        cmp al,197
        je .put_19_pixel
        cmp al,198
        je .put_18_pixel
        cmp al,199
        je .put_17_pixel
        cmp al,200
        je .put_19_pixel
        cmp al,201
        je .put_19_pixel
        cmp al,202
        je .put_19_pixel
        cmp al,203
        je .put_19_pixel
        cmp al,204
        je .put_19_pixel
        cmp al,205
        je .put_19_pixel
        cmp al,206
        je .put_19_pixel
        cmp al,207
        je .put_19_pixel
        cmp al,208
        je .put_20_pixel
        cmp al,209
        je .put_20_pixel
        cmp al,210
        je .put_21_pixel
        cmp al,211
        je .put_21_pixel
        cmp al,212
        je .put_22_pixel
        cmp al,213
        je .put_22_pixel
        cmp al,214
        je .put_22_pixel
        cmp al,215
        je .put_21_pixel
        cmp al,216
        je .put_21_pixel
        cmp al,217
        je .put_21_pixel
        cmp al,218
        je .put_21_pixel
        cmp al,219
        je .put_21_pixel
        cmp al,220
        je .put_21_pixel
        cmp al,221
        je .put_21_pixel
        cmp al,222
        je .put_20_pixel
        cmp al,223
        je .put_19_pixel
        cmp al,224
        je .put_20_pixel
        cmp al,225
        je .put_20_pixel
        cmp al,226
        je .put_21_pixel
        cmp al,227
        je .put_21_pixel
        cmp al,228
        je .put_21_pixel
        cmp al,229
        je .put_21_pixel
        cmp al,230
        je .put_21_pixel
        cmp al,231
        je .put_21_pixel
        cmp al,232
        je .put_21_pixel
        cmp al,233
        je .put_21_pixel
        cmp al,234
        je .put_21_pixel
        cmp al,235
        je .put_21_pixel
        cmp al,236
        je .put_21_pixel
        cmp al,237
        je .put_21_pixel
        cmp al,238
        je .put_21_pixel
        cmp al,239
        je .put_20_pixel
        cmp al,240
        je .put_21_pixel
        cmp al,241
        je .put_21_pixel
        cmp al,242
        je .put_21_pixel
        cmp al,243
        je .put_21_pixel
        cmp al,244
        je .put_21_pixel
        cmp al,245
        je .put_21_pixel
        cmp al,246
        je .put_21_pixel
        cmp al,247
        je .put_21_pixel
        cmp al,248
        je .put_0_pixel
        cmp al,249
        je .put_0_pixel
        cmp al,250
        je .put_0_pixel
        cmp al,251
        je .put_0_pixel
        cmp al,252
        je .put_0_pixel
        cmp al,253
        je .put_0_pixel
        cmp al,254
        je .put_0_pixel
        cmp al,255
        je .put_0_pixel
        jmp .continue

    .put_0_pixel:
        mov [pixel_colour],0
        call PutPixel
        jmp .continue
    .put_16_pixel:
        mov [pixel_colour],16
        call PutPixel
        jmp .continue
    .put_17_pixel:
        mov [pixel_colour],17
        call PutPixel
        jmp .continue
    .put_18_pixel:
        mov [pixel_colour],18
        call PutPixel
        jmp .continue
    .put_19_pixel:
        mov [pixel_colour],19
        call PutPixel
        jmp .continue
    .put_8_pixel:
        mov [pixel_colour],8
        call PutPixel
        jmp .continue
    .put_20_pixel:
        mov [pixel_colour],20
        call PutPixel
        jmp .continue
    .put_21_pixel:
        mov [pixel_colour],21
        call PutPixel
        jmp .continue
    .put_22_pixel:
        mov [pixel_colour],22
        call PutPixel
        jmp .continue
    .put_23_pixel:
        mov [pixel_colour],23
        call PutPixel
        jmp .continue
    .put_24_pixel:
        mov [pixel_colour],24
        call PutPixel
        jmp .continue
    .put_25_pixel:
        mov [pixel_colour],25
        call PutPixel
        jmp .continue
    .put_26_pixel:
        mov [pixel_colour],26
        call PutPixel
        jmp .continue
    .put_27_pixel:
        mov [pixel_colour],27
        call PutPixel
        jmp .continue
    .put_28_pixel:
        mov [pixel_colour],28
        call PutPixel
        jmp .continue
    .put_29_pixel:
        mov [pixel_colour],29
        call PutPixel
        jmp .continue
    .put_30_pixel:
        mov [pixel_colour],30
        call PutPixel
        jmp .continue
    .put_31_pixel:
        mov [pixel_colour],31
        call PutPixel
        jmp .continue
    .put_15_pixel:
        mov [pixel_colour],15
        call PutPixel
        jmp .continue

    .continue:
        inc [x_position]
        cmp [x_position],(SCREEN_WIDTH*SCREEN_HEIGHT)+1
        jne .getpixel

        pop di es
        ret



;=============================================================
; CaptureScreen - captures the pixels on the screen
;
; In:
;       si - pointer to screen storage
; Out:
;       storage = pixels on screen
;
; Note:
;      + The buffer for the screen storage should be 64000
;=============================================================
CaptureScreen:
        push es
        push di
        xor di,di
    .loop:
        mov ax,[es:di]

        pop di
        pop es
        ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;                                                            ;;
;;;             SYSTEM (GAME ENGINE) SUBROUTINES               ;;
;;;                                                            ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;=============================================================
; GetBlockLocation - gets X and Y coordinates for current block
;
; In:
;       current_block - current block number
; Out:
;       x_position - current block X coordinate
;       y_position - current block Y coordinate
;=============================================================
GetBlockLocation:
        ; check for block to locate
        cmp [current_block],1
        je .set_block_1_location
        cmp [current_block],2
        je .set_block_2_location
        cmp [current_block],3
        je .set_block_3_location
        cmp [current_block],4
        je .set_block_4_location
        cmp [current_block],5
        je .set_block_5_location
        cmp [current_block],6
        je .set_block_6_location
        cmp [current_block],7
        je .set_block_7_location
        cmp [current_block],8
        je .set_block_8_location
        cmp [current_block],9
        je .set_block_9_location
        jmp .return		     ; if none found then, exit

    .set_block_1_location:
        mov [x_position],BLOCK_1_X
        mov [y_position],BLOCK_1_Y
        jmp .return
    .set_block_2_location:
        mov [x_position],BLOCK_2_X
        mov [y_position],BLOCK_2_Y
        jmp .return
    .set_block_3_location:
        mov [x_position],BLOCK_3_X
        mov [y_position],BLOCK_3_Y
        jmp .return
    .set_block_4_location:
        mov [x_position],BLOCK_4_X
        mov [y_position],BLOCK_4_Y
        jmp .return
    .set_block_5_location:
        mov [x_position],BLOCK_5_X
        mov [y_position],BLOCK_5_Y
        jmp .return
    .set_block_6_location:
        mov [x_position],BLOCK_6_X
        mov [y_position],BLOCK_6_Y
        jmp .return
    .set_block_7_location:
        mov [x_position],BLOCK_7_X
        mov [y_position],BLOCK_7_Y
        jmp .return
    .set_block_8_location:
        mov [x_position],BLOCK_8_X
        mov [y_position],BLOCK_8_Y
        jmp .return
    .set_block_9_location:
        mov [x_position],BLOCK_9_X
        mov [y_position],BLOCK_9_Y
        jmp .return
    .return:
        ret

;=============================================================
; FillBlockForColour - fills the current block according to the
;                      current colour
;
; In:
;       current_block - current block number
;       x_position - current block X coordinate
;       y_position - current block Y coordinate

; Out:    [nothing]
;=============================================================
FillBlockForColour:
        push cx dx
        call GetBlockLocation
        call GetPixel
        cmp [old_pixel_colour],COLOUR_WHITE
        je .paint_block_black
        cmp [old_pixel_colour],COLOUR_LIGHT_RED
        je .paint_block_dark_red
        cmp [old_pixel_colour],COLOUR_LIGHT_BLUE
        je .paint_block_dark_blue
        cmp [old_pixel_colour],COLOUR_BLACK
        je .paint_block_white
        cmp [old_pixel_colour],COLOUR_RED
        je .paint_block_light_red
        cmp [old_pixel_colour],COLOUR_BLUE
        je .paint_block_light_blue
        jmp .return

    .paint_block_black:
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_BLACK
        call FillRect
        jmp .return

    .paint_block_dark_red:
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_RED
        call FillRect
        jmp .return

    .paint_block_dark_blue:
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_BLUE
        call FillRect
        jmp .return

    .paint_block_white:
        ;   push [x_position]
        ;   push [y_position]
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_WHITE
        call FillRect
        ; outline block
        ;   pop [y_position]
        ;   pop [x_position]
        ;   mov cx,BLOCK_WIDTH
        ;   mov dx,BLOCK_HEIGHT
        ;   mov [pixel_colour],COLOUR_GRAY
        ;   call DrawBox
        jmp .return

    .paint_block_light_red:
        ;   push [x_position]
        ;   push [y_position]
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_LIGHT_RED
        call FillRect
        ; outline block
        ;   pop [y_position]
        ;   pop [x_position]
        ;   mov cx,BLOCK_WIDTH
        ;   mov dx,BLOCK_HEIGHT
        ;   mov [pixel_colour],COLOUR_RED
        ;   call DrawBox
        jmp .return

    .paint_block_light_blue:
        ;   push [x_position]
        ;   push [y_position]
        mov cx,BLOCK_WIDTH
        mov dx,BLOCK_HEIGHT
        mov [pixel_colour],COLOUR_LIGHT_BLUE
        call FillRect
        ; outline block
        ;   pop [y_position]
        ;   pop [x_position]
        ;   mov cx,BLOCK_WIDTH
        ;   mov dx,BLOCK_HEIGHT
        ;   mov [pixel_colour],COLOUR_BLUE
        ;   call DrawBox

    .return:
        pop dx cx
        ret



;=============================================================
; GetWinner - check for winning patterns from block_array       ;[!! THIS FUNCTION IS INCOMPLETE!!]
;
; In/Out:     [nothing]
;=============================================================
GetWinner:
        push ax bx

        ;check for patterns for players

    .no_winner:
        mov [winner],3

    .return:
        pop bx ax
        ret
