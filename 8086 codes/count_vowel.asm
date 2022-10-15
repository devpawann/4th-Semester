.model small
.stack 64
.data
paralist label byte
maxlen db 20
actuallen db ?
kbinput db 20 dup('?')
vowel db 'aeiouAEIOU'
prompt db 'Input Name','$'
.code
main proc far
    mov ax,@data
    mov ds,ax
    call display_msz
    call reads
    call count
    call display
    mov ax,4c00h
    int 21h
    main endp

display_msz proc near
    mov ah,09
    lea dx,prompt
    int 21h
    ret
    display_msz endp

reads proc near
    mov ah,0ah
    lea dx,paralist
    int 21h
    ret
    reads endp

count proc near
    lea si, kbinput
    mov bh,actuallen
    mov dx,00h
    back1: lea di,vowel
    mov bl,0ah
    mov al,[si]
    back: cmp al,[di]
    jnz fwd 
    inc dx
    fwd: inc di
    dec bl
    jnz back
    inc si
    dec bh
    jnz back1
    ret
    count endp

display proc
    mov al,dl
    mov ah,00h
    mov cx,0ah
    mov bx,00000h
    up: mov dx,0000h
    div cx
    add dx,30h
    push dx
    inc bx
    cmp ax,00h
    jne up
    mov cx,bx
    mov ah,02
    x1: pop dx
    int 21h
    loop x1
    ret 
    display endp

