;ASCII character fonts
;font size = 7*9 (width*height)

 .C equ 0xFF	   ; value to identify where font colour should be painted
 .A equ 0xFE	   ; value to identify where an alpha over

; alphanumericals

uglyfont@A:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@B:
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A

uglyfont@C:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

uglyfont@D:
    db .C,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A

uglyfont@E:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C

uglyfont@F:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.A,.A,.A

uglyfont@G:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

uglyfont@H:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@I:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

uglyfont@J:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A

uglyfont@K:
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C

uglyfont@L:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.C

uglyfont@M:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@N:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.A,.C
    db .C,.A,.C,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .C,.A,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@O:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

uglyfont@P:
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A

uglyfont@Q:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.C

uglyfont@R:
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.A,.C,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@S:
    db .A,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A

uglyfont@T:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

uglyfont@U:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A

uglyfont@V:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

uglyfont@W:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.A,.C,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@X:
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C

uglyfont@Y:
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A

uglyfont@Z:
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C

uglyfont@a:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.C

uglyfont@b:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A
uglyfont@c:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.A,.C,.C,.C,.C,.A
uglyfont@d:
    db .A,.A,.A,.A,.A,.C,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
uglyfont@e:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A
uglyfont@f:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
uglyfont@g:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@h:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.A,.C
uglyfont@i:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
uglyfont@j:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
uglyfont@k:
    db .C,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.C,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .A,.C,.C,.A,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
uglyfont@l:
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@m:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.A,.C,.A,.A
    db .C,.C,.A,.C,.A,.C,.A
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
uglyfont@n:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
uglyfont@o:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@p:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
uglyfont@q:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C
uglyfont@r:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
uglyfont@s:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.C,.C,.A,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.A,.A
uglyfont@t:
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@u:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.C,.C,.A
    db .A,.C,.C,.C,.A,.C,.A
uglyfont@v:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
uglyfont@w:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .A,.C,.C,.A,.C,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
uglyfont@x:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.A,.A,.A,.C,.C
    db .A,.A,.C,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.C
uglyfont@y:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@z:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
uglyfont@0:
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.C,.A,.A,.A,.C,.C
    db .C,.A,.A,.A,.C,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.A,.C,.A,.A,.C
    db .C,.A,.C,.A,.A,.A,.C
    db .C,.C,.A,.A,.A,.C,.C
    db .A,.C,.C,.C,.C,.C,.A
uglyfont@1:
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.C,.A,.A,.A
    db .C,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
uglyfont@2:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.C,.C,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
uglyfont@3:
    db .A,.C,.C,.C,.C,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.C,.C,.C,.C,.A
uglyfont@4:
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.A,.C,.A,.C,.A
    db .A,.A,.C,.A,.A,.C,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.C,.C
uglyfont@5:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.C,.C,.C,.C,.C,.A
uglyfont@6:
    db .A,.A,.C,.C,.C,.C,.A
    db .A,.C,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.C,.C,.C,.A,.A
    db .C,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@7:
    db .C,.C,.C,.C,.C,.C,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.A,.A,.A,.A,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
    db .C,.A,.A,.A,.A,.A,.A
uglyfont@8:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
uglyfont@9:
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.A,.A,.A,.C,.A
    db .C,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.A,.C
    db .A,.C,.A,.A,.A,.C,.C
    db .A,.A,.C,.C,.C,.A,.C
    db .A,.A,.A,.A,.A,.A,.C
    db .C,.A,.A,.A,.A,.C,.A
    db .A,.C,.C,.C,.C,.A,.A

; symbols

uglyfont@colon:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
uglyfont@equalsign:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
uglyfont@hyphen:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
uglyfont@whitespace:
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
