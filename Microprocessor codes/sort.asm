mvi d,04h
12: lxi h,3100h
mvi c,04h
11: mov a,m
inx h
mov b,m
cmp b
jm skip
dcx h
mov m,b
inx h
mov m,a
skip: dcr c
jnz 11
dcr d
jnz 12
hlt

;#org 3100h
;#db 22,33,55,1,29