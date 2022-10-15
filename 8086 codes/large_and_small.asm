.model small
.stack 64h
.data
array db 12,19,11,15,16
msg1 db 'smallest is','$'
msg2 db 'largest is','$'
.code
main proc far
    mov ax,@data
    mov ds,ax   
    call find_small 
  ; call find_large
    mov ax,4c00h
    int 21h
    main endp

find_small proc near
    mov al,255
    mov cx,00005h
    lea si,array
    up2: cmp [si],al
    jnc skip1
    mov al,[si]
    skip1: inc si
    loop up2     
    mov ah,09h
    lea dx,msg1
    int 21h
    call display
    ret
    find_small endp  

find_large proc near
    mov al,00h
    mov cx,00005h
    lea si,array
    up: cmp [si],al
    jc skip
    mov al,[si]
    skip: inc si
    loop up      
    mov ah,09h
    lea dx,msg2
    int 21h
    call display
    ret
    find_large endp 



  





display proc near
    mov ah,00
    mov cx,0ah
    mov bx,0000h
    up1: mov dx,0000h
    div cx
    add dx,30h
    push dx
    inc bx
    cmp ax,00h
    jne up1
    mov cx,bx
    mov ah,02h
    x1: pop dx
    int 21h
    loop x1
    ret
    display endp
    
