;To find smallest among 5 numbers
LXI H,3000H
MVI C,05H
MVI A,0ffH
UP: CMP M
JC DOWN
MOV A,M
DOWN: INX H
DCR C
JNZ UP
inx h
MOV M,A
HLT