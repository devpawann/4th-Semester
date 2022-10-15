.model small
.data
string1 db 'dlrow olleH','$'  
.code
main proc far 
    mov ax,@data
    mov ds,ax
    lea si,string1
    mov cl,00h
back: cmp [si],$
jz below
inc cl
inc si
jmp back
below: dec si
mov ah,02
mov dl,[si]
int 21h
dec cl
jnz below
mov ax,4c00h
int 21h
main endp
end main
