;Add 10 8 bit numbers
LXI H,3000H
MVI A,00H
MVI B,00H
MVI C,05H
UP: ADD M
JNC SKIP
INR B
SKIP: INX H
DCR C
JNZ UP
MOV M,A
INX H
MOV M,B
HLT