section .data;
hello_message db "Hello, Holberton",10,0;

section .text;
global main;

extern printf;

main:
	push rdi;
	mov rdi, hello_message;
	call printf;
	pop rdi;
	;
	mov rax, 0;
	xor rdi, rdi;
	syscall
