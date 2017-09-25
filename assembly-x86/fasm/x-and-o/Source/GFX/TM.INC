; TM (trademark) icon
.B  equ  000
.W  equ  015
.A  equ  255

tradmarksign:
    db W,W,W,W,W,W,W,W,W,W,W
    trademarksign_width = $ - trademarksign
    db W,W,W,W,W,W,W,W,W,W,W
    db W,W,W,W,W,W,W,W,W,W,W
    db W,W,W,W,W,W,W,W,W,W,W
    db W,W,W,W,W,W,W,W,W,W,W
    db W,W,W,W,W,W,W,W,W,W,W
    trademarksign_area = $ - trademarksign
