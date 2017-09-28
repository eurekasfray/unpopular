; Genesis GL system font
; Note:
;       * each font dimension is 7x9
;       * 255 identifies where text color should be printed.
;       * 254 identifies the transparent area of the font.

.C equ 255
.A equ 254
; alphanumeric

glfont@A:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@B:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@C:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@D:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@E:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@F:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@G:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@H:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@I:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@J:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@K:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@L:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@M:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@N:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@O:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@P:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@Q:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.C
    db .A,.A,.A,.A,.A,.A,.A

glfont@R:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@S:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@T:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@U:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@V:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@W:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@X:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@Y:
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@Z:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@a:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@b:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@c:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@d:
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@e:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@f:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@g:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A

glfont@h:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@i:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@j:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .A,.C,.C,.C,.A,.A,.A

glfont@k:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@l:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@m:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@n:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@o:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@p:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A

glfont@q:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C

glfont@r:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.C,.C,.A,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@s:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@t:
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.A,.A,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@u:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@v:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@w:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@x:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@y:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

glfont@z:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@0:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@1:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@2:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@3:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@4:
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@5:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@6:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@7:
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@8:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@9:
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
glfont@exclaimationsign:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@atsign:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.C,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@poundsign:
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@dollarsign:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@percentagesign:
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.C,.C,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.C,.A,.A,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@caret:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@ampersand:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@asterisk:
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.C,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@leftparenthesis:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@rightparenthesis:
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@leftbracket:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@rightbracket:
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@leftcurlybracket:
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@rightcurlybracket:
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@underscore:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@hyphen:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@plussign:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@equalsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@verticalbar:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@backslash:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@colon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@semicolon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@doublequotationsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A


glfont@singlequotationsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@lesserthansign:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@comma:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@greaterthansign:
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@fullstop:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@questionsign:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@forwardslash:
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A

glfont@whitespace:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
