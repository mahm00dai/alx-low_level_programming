section .data
    msg db 'Hello, Holberton', 10, 0  ; The message to be printed, 10 is newline character, 0 is null terminator
    format db '%s', 0       ; Format string for printf

section .text
    extern printf           ; Declare the printf function
    global main             ; Declare main as the entry point

main:
    ; Setup parameters for printf
    mov rdi, format         ; Address of the format string
    mov rsi, msg            ; Address of the message
    call printf             ; Call printf

    ; Exit the program
    mov rax, 60             ; System call number for exit (60)
    xor rdi, rdi            ; Exit code 0
    syscall                 ; Invoke the system call

