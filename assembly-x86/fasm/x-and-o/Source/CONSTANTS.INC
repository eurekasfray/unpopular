;=======================================================================
; CONSTANTS
;=======================================================================
; system colours (decimal)
SYS_COLOUR_WHITE           = 0015
SYS_COLOUR_MENU_SIDEBAR    = 0200
SYS_COLOUR_MENU_HEADER     = 0017
SYS_COLOUR_MENU_BACKGROUND = 0016

; player colours (decimal)
COLOUR_BRIGHT_WHITE = 0015
COLOUR_BRIGHT_PINK  = 0037
COLOUR_LIGHT_PURPLE = 0035
COLOUR_LIGHT_YELLOW = 0044
COLOUR_LIGHT_ORANGE = 0006
COLOUR_LIGHT_GREEN  = 0047
COLOUR_LIGHT_BLUE   = 0032
COLOUR_LIGHT_AQUA   = 0052
COLOUR_LIGHT_RED    = 0040
;COLOUR_LIGHT_RED   = 0039
COLOUR_DARK_GRAY    = 0020
COLOUR_YELLOW       = 0116
COLOUR_PURPLE       = 0107
COLOUR_ORANGE       = 0114
COLOUR_WHITE        = 0029
COLOUR_BLACK        = 0000
COLOUR_GREEN        = 0119
COLOUR_GRAY         = 0007
COLOUR_PINK         = 0038
COLOUR_BLUE         = 0104
COLOUR_AQUA         = 0125
COLOUR_RED          = 0112
COLOUR_ALPHA        = 0248 ; invisible colour for sprites

; sizes for fonts, blocks, screen and line length
LINE_LENGTH         = 20  ; px
FONT_WIDTH          = 7   ; px
FONT_HEIGHT         = 9   ; px
FONT_AREA           = FONT_WIDTH*FONT_HEIGHT+1
FONT_GL             = 1   ; px
FONT_UGLY           = 2   ; px
FONT_BAREFACE       = 5   ; px
BLOCK_WIDTH         = 29  ; px
BLOCK_HEIGHT        = 19  ; px
SCREEN_WIDTH        = 320 ; px
SCREEN_HEIGHT       = 200 ; px

; coordinates for blocks (the top, mostleft location for X & Y)
BLOCK_1_X           = 111  ; px
BLOCK_1_Y           = 61   ; px
BLOCK_2_X           = BLOCK_1_X+BLOCK_WIDTH*1+1
BLOCK_2_Y           = BLOCK_1_Y
BLOCK_3_X           = BLOCK_1_X+(BLOCK_WIDTH*2)+2
BLOCK_3_Y           = BLOCK_1_Y
BLOCK_4_X           = BLOCK_1_X
BLOCK_4_Y           = BLOCK_1_Y+BLOCK_HEIGHT+1
BLOCK_5_X           = BLOCK_1_X+BLOCK_WIDTH+1
BLOCK_5_Y           = BLOCK_1_Y+BLOCK_HEIGHT+1
BLOCK_6_X           = BLOCK_1_X+(BLOCK_WIDTH*2)+2
BLOCK_6_Y           = BLOCK_1_Y+BLOCK_HEIGHT+1
BLOCK_7_X           = BLOCK_1_X
BLOCK_7_Y           = BLOCK_1_Y+(BLOCK_HEIGHT*2)+2
BLOCK_8_X           = BLOCK_1_X+BLOCK_WIDTH+1
BLOCK_8_Y           = BLOCK_1_Y+(BLOCK_HEIGHT*2)+2
BLOCK_9_X           = BLOCK_1_X+BLOCK_WIDTH*2+2
BLOCK_9_Y           = BLOCK_1_Y+(BLOCK_HEIGHT*2)+2

; player id number
P1_ID               = 1
P2_ID               = 2

; directional characters for grid drawing sequence
U                   = 1
D                   = 2
L                   = 3
R                   = 4
ENDSQ               = 0

; virtual keys scancodes
VK_UP               = 48E0h
VK_DOWN             = 50E0h
VK_LEFT             = 4BE0h
VK_RIGHT            = 4DE0h
VK_RETURN           = 13
VK_SPACE            = 32
VK_ESCAPE           = 27
