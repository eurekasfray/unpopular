; Left, Up, Right and Down arrows
; Bitmaps

.C equ 15
.A equ 0xFF

leftarrow:
    db .A,.A,.A,.A,.A,.A,.A
    leftarrow_width = $ - leftarrow
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.C,.C,.A,.A,.A,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.C,.C,.A,.A,.A,.A
    db .A,.A,.C,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    leftarrow_area = $ - leftarrow

rightarrow:
    db .A,.A,.A,.A,.A,.A,.A
    rightarrow_width = $ - rightarrow
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.C,.C,.A
    db .C,.C,.C,.C,.C,.C,.C
    db .A,.A,.A,.A,.C,.C,.A
    db .A,.A,.A,.A,.C,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    rightarrow_area = $ - rightarrow

uparrow:
    db .A,.A,.A,.C,.A,.A,.A
    uparrow_width = $ - uparrow
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    uparrow_area = $ - uparrow

downarrow:
    db .A,.A,.A,.C,.A,.A,.A
    downarrow_width = $ - downarrow
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.C,.C,.C,.C,.C,.A
    db .A,.A,.C,.C,.C,.A,.A
    db .A,.A,.A,.C,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    db .A,.A,.A,.A,.A,.A,.A
    downarrow_area = $ - downarrow
