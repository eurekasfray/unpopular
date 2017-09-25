;=============================================================;
; GENERAL INFO                                                ;
;=============================================================;
;                 XAN (Cross & Naught)                        ;
;           Coded by MeshNix (JeSani Gilbert)                 ;
;                                                             ;
; Project Name:  Grid                                         ;
; Program Name:  XAN (Cross & Naught)                         ;
; Project Start: 24/Oct/2010                                  ;
; Project End:   <unknown>                                    ;
; Version:       Alpha 0                                      ;
; Coder:         JeSani Gilbert                               ;
; Compiler:      Flat Assembler 1.69.25                       ;
; Filename:      XAN.EXE                                      ;
;                                                             ;
; License:       GNU GPL                                      ;
; Comment:      <not available>                               ;
;                                                             ;
; History:      <not available>                               ;
;                                                             ;

;=============================================================;
; CODE - START
;=============================================================

; command file (.COM)
; org 100h
; use16

; other file format (.EXE)

format MZ
push cs
pop	ds

;=============================================================
; CODE - MAIN ROUTINE
;=============================================================

;--------------------------------------------------------
; Program entry: initialize graphics
;--------------------------------------------------------
program_entry:
        ; set video mode to graphics mode 0x13
        mov	  ax,0x0013
        int	  0x10

        ; setup video segment and offset
        xor	  bx,bx
        mov	  bx,0xA000
        mov	  es,bx
        mov	  bx,0x0000

    .display_menu:
        call MainMenu

        ; was MainMenu exited to end the program?
        cmp [exit_flag],1
        je program_exit

        ; if it didn't then it is assumed that it exited
        ; to start a new game
        call GamePlay
        jmp	.display_menu

program_exit:
        ; return to normal video mode
        mov	  ax,0x0003
        int	  0x10
        ; exit program
        mov	  ax,0x4C00
        int	  0x21

;=============================================================
; MAIN MENU FUNCTION
;=============================================================
MainMenu:
        include "mainmenu.asm"

;=============================================================
; GAMEPLAY - THE TIC-TAC-TOE GAME FUNCTION
;=============================================================
GamePlay:
        include "gameplay.asm"

;=============================================================
; INCLUSION FILES
;=============================================================
        ; (graphical and system subroutines, constants,
        ; font data, miscellaneous data, messages)
        include "functions.asm"
        include "constants.inc"
        include "fontdata.inc"
        include "data.inc"
        include "gfx\splash.inc"
        include "gfx\arrows.inc"
