; Macro for pushing all registers
%macro pusha 0
    push rax
    push rbx
    push rcx
    push rdx
    push rsi
    push rdi
%endmacro

; Macro for popping all registers
%macro popa 0
    pop rdi
    pop rsi
    pop rdx
    pop rcx
    pop rbx
    pop rax
%endmacro

; Macro for printing a string given a length (msg, len)
%macro printl 2
    pusha

    mov edx, %2
    mov ecx, %1
    mov ebx, 1
    mov eax, 4
    int 0x80
    
    popa
%endmacro

; Macro for printing a null terminated string
%macro printn 1
    pusha

    mov eax, %1        ; Print the message in a loop (with a null terminator)
    mov ebx, 1
    loop:
        printl eax, ebx
        inc eax
        cmp byte [eax], 0
        jne loop

    popa
%endmacro

; Macro for exit
%macro exit 0
    mov eax, 1
    mov ebx, 0
    int 0x80
%endmacro