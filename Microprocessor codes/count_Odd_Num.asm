;Count odd number from list
LXI H,3000H
MVI C,05H
MVI B,00H
UP: MOV A,M
RRC
JNC SKIP
INR B
SKIP: INX H
DCR C
JNZ UP
MOV M,B
HLT

#org 3000
#db 1,3,5,7,2
;correct