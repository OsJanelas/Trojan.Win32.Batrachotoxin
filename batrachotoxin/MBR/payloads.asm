[bits 16]

; STATICS
phase1:
    mov ax, 0xa000
    mov es, ax
    xor di, di
    mov cx, 64000
.bg:
    in al, 0x40
    and al, 0x1F
    stosb
    loop .bg

    mov si, msg1
    call print_string_center
    inc byte [timer]
    jmp end_frame

; FORMULE x*y
phase2:
    mov ax, 0xa000
    mov es, ax
    xor di, di
    xor cx, cx      ; y
.y:
    xor dx, dx      ; x
.x:
    mov ax, dx
    add ax, [word_timer]
    mov si, cx
    add si, [word_timer]
    imul ax, si
    and al, 0x3F
    stosb
    inc dx
    cmp dx, 320
    jne .x
    inc cx
    cmp cx, 200
    jne .y
    
    mov si, msg2
    call print_string_center
    inc word [word_timer]
    jmp end_frame

; XOR FRACTALS
phase3:
    mov ax, 0xa000
    mov es, ax
    xor di, di
.draw:
    mov ax, di
    mov bx, 320
    xor dx, dx
    div bx          ; ax=y, dx=x
    xor al, dl
    add al, [timer]
    stosb
    cmp di, 64000
    jne .draw
    
    mov si, msg3
    call print_string_center
    inc byte [timer]
    jmp end_frame

; SIERSPINSKI TRIANGLES
phase4:
    mov ax, 0xa000
    mov es, ax
    xor di, di
.loop_y:
    mov ax, di
    xor dx, dx
    mov bx, 320
    div bx          ; ax = y, dx = x
    mov bx, ax
    and bx, dx
    jnz .black
    mov al, dl
    add al, [timer]
    stosb
    jmp .next
.black:
    xor al, al
    stosb
.next:
    cmp di, 64000
    jne .loop_y
    inc byte [timer]

    mov si, msg4
    call print_string_center
    jmp end_frame

; OR
phase5:
    mov ax, 0xa000
    mov es, ax
    xor di, di
.loop_y2:
    mov ax, di
    xor dx, dx
    mov bx, 320
    div bx          ; ax = y, dx = x
    mov bx, ax
    or bx, dx
    jz .white2
    mov al, dl
    add al, [timer]
    stosb
    jmp .next2
.white2:
    xor al, al
    stosb
.next2:
    cmp di, 64000
    jne .loop_y2
    inc byte [timer]

    mov si, msg5
    call print_string_center
    jmp end_frame