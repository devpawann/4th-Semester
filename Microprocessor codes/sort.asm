mvi d,09h
12: lxi h,3100h
mvi c,09h
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