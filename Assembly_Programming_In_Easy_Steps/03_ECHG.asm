INCLUDELIB kernel32.lib
ExitProcess PROTO

.DATA
var QWORD ?

.CODE
main PROC
XOR RCX, RCX
XOR RDX, RDX
MOV RCX, 5
XCHG RCX, var
MOV DL, 3
XCHG DH, DL

CALL ExitProcess
main ENDP

END