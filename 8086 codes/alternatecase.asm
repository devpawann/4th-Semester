.model small
.stack 64
.data
paralist label byte
maxlen db 20
actuallen db ?
kbinput db 20 dup('?')
prompt db 'Input Name','$'
.code
main proc far
    mov ax,@data
    mov ds,ax
    call display_msz
    call read
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

read proc near
    mov ah,0ah
    lea dx,paralist
    int 21h
    ret
    read endp

display proc near
    lea si,kbinput
    mov cl,actuallen
    mov ch,0000h
  up: mov al,[si]
    cmp al,96
    jc skip
    sub al,32
    mov ah,02h
    mov dl,al
    int 21h
    skip:inc si
    mov al,[si]
    cmp al,91
    jnc below
    add al,32 
     mov ah,02h
    mov dl,al
    int 21h
   below: inc si
    loop up
    display endp
