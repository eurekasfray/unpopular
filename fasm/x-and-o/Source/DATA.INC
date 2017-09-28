;=======================================================================
; DATA & MESSAGES
;=======================================================================

; system data
area_counter      dw 0              ;
row_counter       dw 0              ;
x_position        dw 0              ; x-coordinate
y_position        dw 0              ; y-coordinate
counter           dw 0              ; general counter for most functions
font_colour       db 0              ; font colour
pixel_colour      db 0              ; pixel colour for GetPixel
old_pixel_colour  db 0              ; pixel colour read from GetPixel
old_x_position    dw 0              ;
old_y_position    dw 0              ;
current_player    db 0              ; current player
current_block     db 0              ; current block (cursor)
block_array       db 9 dup (0)      ; keeps track of block occupation
index             db 0              ; index for block_array
match_counter     db 0              ;
end_of_game_flag  db 0              ; identifies end-of-game (0=Not end; 1=End of game)
exit_flag         db 0              ; identifies end-of-process (0=Don't exit; 1=Exit program)
first_block       db 0              ;
second_block      db 0              ;
third_block       db 0              ;
winner            db 0              ; winner (1=P1; 2=P2 ; 3=Game draw)
current_item      db 1              ; current item (1=item1; 2=item2; 3=item3
capture_buffer    rb 64000          ; stores the data from the screen

; checkerboard render data
chkbrd_width      dw 0              ; width of individual patterns
chkbrd_height     dw 0              ; height of individual patterns
chkbrd_horiz_num  db 0              ; number of patterns running horizontally
chkbrd_vert_num   db 0              ; number of patterns running vertically
chkbrd_fg_colour  db 0              ; colour of foreground
chkbrd_bg_colour  db 0              ; colour of background
chkbrd_fg_or_bg   db 0              ; defines which ground color to display (0=fg ; 1=bg)
chkbrd_x          dw 0              ; used for tracking x coordinates
chkbrd_y          dw 0              ; used for tracking y coordinates


; game data
_rounds           db '0'            ; round, p1 score, p2 score are counted in ASCII
_p1_score         db '0'
_p2_score         db '0'

; messages
_logo             db 'XAN',0
_p1_msg           db '1P',0
_p2_msg           db '2P',0
_player_1         db 'Player1',0
_player_2         db 'Player2',0
_winner           db 'Winner:',0
_successful       db 'Successful',0
_scrambled        db 'Scrambled',0
_are_you_sure     db 'Are you sure?',0
_yes_or_no        db 'YES or NO',0
_title2           db 'Cross and Nix',0
_title1           db 'Tic-Tac-Toe',0
_version          db 'Version 1.0 alpha',0

_menuheader       db 'MAIN MENU',0
_menuitem1        db 'New Game',0
_menuitem2        db 'Help',0
_menuitem3        db 'Exit',0

_helpline1        db 'Keys used:',0
_helpline2        db '     Move up',0
_helpline3        db '     Move right',0
_helpline4        db '     Move down',0
_helpline5        db '     Move left',0
_helpline6        db ' Spc Mark cell',0
_helpline7        db ' Esc Menu',0
_helpline8        db 'Developed by: MeshNix',0


; 1D table (array) data for address & character lookup
drawgrid_addr     dw DrawGridLineUp
                  dw DrawGridLineDown
                  dw DrawGridLineLeft
                  dw DrawGridLineRight

grid_directions   db R,R,R,D,L,L,L,D,R,R,R,D,L,L,L,U,U,U,R,D,D,D,R,U,U,U,R,D,D,D,ENDSQ
