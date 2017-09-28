; Genesis GL font
;
; Font name: Lean
; Dimension: 7x9
; Edited:    31/Dec/2010 - 12:41 AM
; Notes:     1. each font dimension is 7x9
;            2. 255 identifies where text color should be printed.
;            3. 254 identifies the transparent area of the font.
;            4. Some symbol characters are missing from this font

.C equ 255   ; this shows foreground of the font (i.e. the face)
.A equ 254   ; this represents a transparent background of the font

; uppercased letters

lame@A:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@B:
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A

lame@C:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@D:
    db .C,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A

lame@E:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C

lame@F:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.A,.A,.A

lame@G:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@H:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@I:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

lame@J:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A

lame@K:
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C

lame@L:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.C

lame@M:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@N:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@O:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@P:
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A

lame@Q:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.C

lame@R:
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C

lame@S:
    db .A,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A

lame@T:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

lame@U:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@V:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

lame@W:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@X:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@Y:
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

lame@Z:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

; lowercased letters

lame@a:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.C

lame@b:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A

lame@c:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.A,.C,.C,.C,.C,.A

lame@d:
    db .A,.A,.A,.A,.A,.C,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A

lame@e:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A

lame@f:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A

lame@g:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@h:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C

lame@i:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A

lame@j:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A

lame@k:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C

lame@l:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@m:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.A,.C,.A,.A
    db .C,.C,.A,.C,.A,.C,.A
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C

lame@n:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

lame@o:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@p:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A

lame@q:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C

lame@r:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A

lame@s:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A

lame@t:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@u:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.C,.C,.A
    db .A,.C,.C,.C,.A,.C,.A

lame@v:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

lame@w:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A

lame@x:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.A,.A,.A,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.C

lame@y:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@z:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

; digit from 0-9

lame@0:
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .A,.C,.C,.C,.C,.C,.A

lame@1:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

lame@2:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

lame@3:
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A

lame@4:
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C

lame@5:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A

lame@6:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@7:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A

lame@8:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

lame@9:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.C
    db .A,.A,.C,.C,.C,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A

; symbols and signs

lame@colon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

lame@equalsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

lame@hyphen:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

lame@whitespace:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
