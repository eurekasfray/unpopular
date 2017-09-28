; Genesis GL main font
;
; Font name: Bareface
; Dimension: 7x11
; Edited:    31/Dec/2010 - 1:15 PM
; Notes:
;            * each font dimension is 7x11
;            * 255 identifies where text color should be printed.
;            * 254 identifies the transparent area of the font.
;            * 2 characters are missing in this set: '`' and '~'
;            * in this font, the background is solid, while the foreground is transparent

.C equ 255   ; this shows foreground of the font (i.e. the face)
.A equ 254   ; this represents a transparent background of the font

; uppercased letters

bareface@A:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@B:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@C:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@D:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@E:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@F:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@G:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@H:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@I:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@J:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .A,.C,.C,.A,.C,.C,.C
    db .A,.C,.C,.A,.C,.C,.C
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@K:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.A,.C,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.A,.C,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@L:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@M:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@N:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@O:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@P:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@Q:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@R:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.A,.C,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@S:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@T:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@U:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@V:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@W:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@X:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@Y:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@Z:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

; lowercased letters

bareface@a:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@b:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@c:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@d:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@e:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@f:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@g:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@h:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@i:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@j:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .A,.C,.C,.C,.A,.C,.C
    db .A,.C,.C,.C,.A,.C,.C
    db .C,.A,.A,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@k:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@l:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@m:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.C,.A,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@n:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@o:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@p:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@q:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

bareface@r:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.A,.A,.C,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@s:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@t:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.A,.C
    db .C,.C,.C,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@u:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.C,.A,.A,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@v:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@w:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@x:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@y:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@z:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

; digits from 0-9

bareface@0:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@1:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.A,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@2:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@3:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@4:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.A,.A,.C
    db .C,.C,.C,.A,.C,.A,.C
    db .C,.C,.A,.C,.C,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@5:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@6:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@7:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@8:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@9:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

; symbols and signs

bareface@exclaimationsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@atsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@poundsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.A,.C,.A,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@dollarsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.C,.C,.A,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@percentagesign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.A,.C,.C,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@caret:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@ampersand:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.A,.C,.C,.C
    db .C,.A,.C,.C,.A,.C,.A
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@asterisk:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@leftparenthesis:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@rightparenthesis:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@leftbracket:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@rightbracket:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@leftcurlybracket:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.A,.A,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@rightcurlybracket:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.A,.A,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@underscore:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@hyphen:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@plussign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@equalsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@verticalbar:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@backslash:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@colon:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@semicolon:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@doublequotationsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.A,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C


bareface@singlequotationsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@lesserthansign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@comma:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@greaterthansign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@fullstop:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@questionsign:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.A,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@forwardslash:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.C,.A,.C
    db .C,.C,.C,.C,.A,.C,.C
    db .C,.C,.C,.A,.C,.C,.C
    db .C,.C,.A,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.A,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.C,.C,.C,.C,.C,.C

bareface@whitespace:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
