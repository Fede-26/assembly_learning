%include "../includes/macros.inc"

section	.text
    global _start			;must be declared for linker (ld)

msg	db	'Hello, world!',0xa, 0	;our dear string
len	equ	$ - msg			;length of our dear string

_start:					;tell linker entry point

    printl msg, len      ; Print the message in one call (given the length)

    printn msg          ; Print the message with a null terminator


	exit