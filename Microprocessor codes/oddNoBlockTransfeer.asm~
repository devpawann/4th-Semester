MVI B, 04H
BCK2: LXI H, 2100H
MVI C, 04H
BCK1: MOV E, M ; Current number in E
INX H
MOV A, M ; Next number in A
CMP E ; A - E
JNC SKIP ; If next number is greater then don’t bother
MOV M, E ; else exchange the two numbers
DCX H
MOV M, A
INX H
SKIP: DCR C
JNZ BCK1
DCR B
JNZ BCK2
HLT