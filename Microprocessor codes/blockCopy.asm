LXI B,2000H
LXI D,3000H
MVI L,05H
UP: LDAX B
STAX D
INX D
INX B
DCR L
JNZ UP
HLT