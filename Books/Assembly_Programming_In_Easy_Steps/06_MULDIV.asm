INCLUDELIB kernel32.lib
ExitProcess PROTO

.DATA
var QWORD 2

.CODE
main PROC
XOR RDX, RDX
MOV RAX, 10
MOV RBX, 5
MUL RBX
MUL var
MOV RBX, 8
DIV RBX

CALL ExitProcess
main ENDP

END