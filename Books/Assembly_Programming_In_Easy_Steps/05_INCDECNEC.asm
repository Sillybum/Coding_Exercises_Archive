INCLUDELIB kernel32.lib
ExitProcess PROTO

.DATA
var QWORD 99

.CODE
main PROC
XOR RCX, RCX
INC var
MOV RCX, 51
DEC RCX
NEG RCX

CALL ExitProcess
main ENDP

END