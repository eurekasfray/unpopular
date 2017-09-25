include 'fonts\stdfonts.inc'

;=======================================================================
; UGLY font data
;=======================================================================
; address for font bitmaps
ugly_font_addresses:
    dw uglyfont@A,uglyfont@B,uglyfont@C,uglyfont@D,uglyfont@E,uglyfont@F,uglyfont@G,uglyfont@H,uglyfont@I,uglyfont@J,uglyfont@K,uglyfont@L,uglyfont@M
    dw uglyfont@N,uglyfont@O,uglyfont@P,uglyfont@Q,uglyfont@R,uglyfont@S,uglyfont@T,uglyfont@U,uglyfont@V,uglyfont@W,uglyfont@X,uglyfont@Y,uglyfont@Z
    dw uglyfont@a,uglyfont@b,uglyfont@c,uglyfont@d,uglyfont@e,uglyfont@f,uglyfont@g,uglyfont@h,uglyfont@i,uglyfont@j,uglyfont@k,uglyfont@l,uglyfont@m
    dw uglyfont@n,uglyfont@o,uglyfont@p,uglyfont@q,uglyfont@r,uglyfont@s,uglyfont@t,uglyfont@u,uglyfont@v,uglyfont@w,uglyfont@x,uglyfont@y,uglyfont@z
    dw uglyfont@0,uglyfont@1,uglyfont@2,uglyfont@3,uglyfont@4,uglyfont@5,uglyfont@6,uglyfont@7,uglyfont@8,uglyfont@9,uglyfont@colon
    dw uglyfont@equalsign,uglyfont@hyphen,uglyfont@whitespace

; lookup table/supported characters/font character set
ugly_font_characters:
    db 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789:=-',32	    ; 64 characters


;=======================================================================
; GLFONT font data
;=======================================================================
; address for font bitmaps
glfont_font_addresses:
    dw glfont@A,glfont@B,glfont@C,glfont@D,glfont@E,glfont@F,glfont@G,glfont@H,glfont@I,glfont@J,glfont@K,glfont@L,glfont@M
    dw glfont@N,glfont@O,glfont@P,glfont@Q,glfont@R,glfont@S,glfont@T,glfont@U,glfont@V,glfont@W,glfont@X,glfont@Y,glfont@Z
    dw glfont@a,glfont@b,glfont@c,glfont@d,glfont@e,glfont@f,glfont@g,glfont@h,glfont@i,glfont@j,glfont@k,glfont@l,glfont@m
    dw glfont@n,glfont@o,glfont@p,glfont@q,glfont@r,glfont@s,glfont@t,glfont@u,glfont@v,glfont@w,glfont@x,glfont@y,glfont@z
    dw glfont@0,glfont@1,glfont@2,glfont@3,glfont@4,glfont@5,glfont@6,glfont@7,glfont@8,glfont@9,glfont@exclaimationsign
    dw glfont@atsign,glfont@poundsign,glfont@dollarsign,glfont@percentagesign,glfont@caret,glfont@ampersand
    dw glfont@asterisk,glfont@leftparenthesis,glfont@rightparenthesis,glfont@leftbracket,glfont@rightbracket
    dw glfont@leftcurlybracket,glfont@rightcurlybracket,glfont@underscore,glfont@hyphen,glfont@plussign
    dw glfont@equalsign,glfont@verticalbar,glfont@backslash,glfont@colon,glfont@semicolon
    dw glfont@doublequotationsign,glfont@singlequotationsign,glfont@lesserthansign,glfont@comma
    dw glfont@greaterthansign,glfont@fullstop,glfont@questionsign,glfont@forwardslash
    dw glfont@whitespace

; lookup table/supported characters/font character set
glfont_font_characters:
    db "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
    db "!@#$%^&*()[]{}_-+=|\:;",'"',"'","<,>.?/",32

;=======================================================================
; BAREFACE font data
;=======================================================================
; address for font bitmaps
bareface_font_addresses:
    dw bareface@A,bareface@B,bareface@C,bareface@D,bareface@E,bareface@F,bareface@G,bareface@H,bareface@I,bareface@J,bareface@K,bareface@L,bareface@M
    dw bareface@N,bareface@O,bareface@P,bareface@Q,bareface@R,bareface@S,bareface@T,bareface@U,bareface@V,bareface@W,bareface@X,bareface@Y,bareface@Z
    dw bareface@a,bareface@b,bareface@c,bareface@d,bareface@e,bareface@f,bareface@g,bareface@h,bareface@i,bareface@j,bareface@k,bareface@l,bareface@m
    dw bareface@n,bareface@o,bareface@p,bareface@q,bareface@r,bareface@s,bareface@t,bareface@u,bareface@v,bareface@w,bareface@x,bareface@y,bareface@z
    dw bareface@0,bareface@1,bareface@2,bareface@3,bareface@4,bareface@5,bareface@6,bareface@7,bareface@8,bareface@9,bareface@exclaimationsign
    dw bareface@atsign,bareface@poundsign,bareface@dollarsign,bareface@percentagesign,bareface@caret,bareface@ampersand
    dw bareface@asterisk,bareface@leftparenthesis,bareface@rightparenthesis,bareface@leftbracket,bareface@rightbracket
    dw bareface@leftcurlybracket,bareface@rightcurlybracket,bareface@underscore,bareface@hyphen,bareface@plussign
    dw bareface@equalsign,bareface@verticalbar,bareface@backslash,bareface@colon,bareface@semicolon
    dw bareface@doublequotationsign,bareface@singlequotationsign,bareface@lesserthansign,bareface@comma
    dw bareface@greaterthansign,bareface@fullstop,bareface@questionsign,bareface@forwardslash
    dw bareface@whitespace

; lookup table/supported characters/font character set
bareface_font_characters:
    db "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
    db "!@#$%^&*()[]{}_-+=|\:;",'"',"'","<,>.?/",32
