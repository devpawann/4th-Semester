LDA 2000H
MVI B,00H
MVI C,08H
UP: RLC
JNC SKIP
INR B
SKIP: DCR C
JNZ UP
MOV A,B
STA 2001H
HLT

#org 2000h
#db 0fh