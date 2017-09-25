; Genesis GL main font
;
; Font name: Pilot
; Dimension: 7x9
; Edited:    31/Dec/2010 - 12:41 AM
; Notes:     1. each font dimension is 7x9
;            2. 255 identifies where text color should be printed.
;            3. 254 identifies the transparent area of the font.
;            4. 2 characters are missing in this set: '`' and '~'

.C equ 255   ; this shows foreground of the font (i.e. the face)
.A equ 254   ; this represents a transparent background of the font

; uppercased letters

pilot@A:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@B:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@C:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@D:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@E:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@F:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@G:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@H:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@I:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@J:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@K:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@L:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@M:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@N:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@O:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@P:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@Q:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.C
    db .A,.A,.A,.A,.A,.A,.A

pilot@R:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@S:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@T:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@U:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@V:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@W:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@X:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@Y:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@Z:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

; lowercased letters

pilot@a:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@b:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@c:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@d:
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@e:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@f:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@g:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A

pilot@h:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@i:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@j:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .A,.C,.C,.C,.A,.A,.A

pilot@k:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@l:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@m:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@n:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@o:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@p:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A

pilot@q:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C

pilot@r:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.C,.C,.A,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@s:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@t:
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.A,.A,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@u:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@v:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@w:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@x:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@y:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

pilot@z:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

; digits from 0-9

pilot@0:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@1:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@2:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@3:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@4:
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@5:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@6:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@7:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@8:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@9:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

; symbols and signs

pilot@exclaimationsign:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@atsign:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@poundsign:
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@dollarsign:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@percentagesign:
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@caret:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@ampersand:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@asterisk:
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@leftparenthesis:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@rightparenthesis:
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@leftbracket:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@rightbracket:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@leftcurlybracket:
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@rightcurlybracket:
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@underscore:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@hyphen:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@plussign:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@equalsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@verticalbar:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@backslash:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@colon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@semicolon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@doublequotationsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A


pilot@singlequotationsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@lesserthansign:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@comma:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@greaterthansign:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@fullstop:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@questionsign:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@forwardslash:
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

pilot@whitespace:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
