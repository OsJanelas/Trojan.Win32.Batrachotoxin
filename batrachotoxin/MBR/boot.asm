[bits 16]
[ORG 0x7C00]

bootmain:
    xor ax, ax
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov sp, 0x7C00

    mov ax, 0x0013
    int 0x10

    mov bx, 0x0000
    mov dh, 0x00
    mov dl, 0x80
    mov ch, 0x00
    mov cl, 0x02
    call main_sequence

    ; JUMP TO THE LOADED KERNEL (ASSUMING IT STARTS AT 0x1000)
    jmp 0x1000

%include "batrachotoxin/MBR/kernel.asm"

times 510-($-$$) db 0
dw 0xAA55