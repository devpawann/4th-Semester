.model small
.data
a dw 9835h
b dw 6987h
sum dw ?
carry dw 00h

.code
main proc
    mov ax,@data
    mov ds,ax
    mov ax,a
    add ax,b
    jnc skip
    inc carry
   ; mov sum,ax
    skip: mov sum,ax
    main endp