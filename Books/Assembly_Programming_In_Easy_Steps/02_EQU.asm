INCLUDELIB kernel32.lib
ExitProcess PROTO

.DATA
con EQU 12

.CODE
main PROC
MOV RCX, con
MOV RDX, con + 8
MOV RCX, con + 8 * 2
MOV RDX, ( con + 8 ) * 2
MOV RCX, con MOD 5
MOV RDX, ( con - 3) / 3

CALL ExitProcess
main ENDP

END