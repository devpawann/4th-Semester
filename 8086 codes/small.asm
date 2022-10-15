.model small
.stack
.data
array db 92,43,32,25,100,'$'
.code
main proc near
    mov ax,@data
    mov ds,ax
    call findsmall
    mov ah,4ch
    int 21h
    main endp

findsmall proc near
    mov bl,0ffh
    lea si,array
   up: cmp [si],bl
    jnc skip
    mov bl,[si] 
    
    skip:inc si
    CMP [si],'$'
    JNZ up
    call display
    ret
    findsmall endp

display proc near
     mov ah,02 
    add bl,30h  
    mov dl,bl
    int 21h
    display endp

end main