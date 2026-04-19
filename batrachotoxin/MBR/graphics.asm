%define WSCREEN 320
%define HSCREEN 200

end_frame:
    mov dx, 0x3DA
.wait:
    in al, dx
    test al, 8
    jz .wait
    
    jmp main_sequence