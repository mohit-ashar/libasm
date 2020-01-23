global _ft_strcpy

_ft_strcpy:
		mov rax, 0
		mov rcx, 0
_loop:
		mov al, [rsi + rcx]
		mov byte [rdi + rcx], al
		cmp al, byte 0
		jz _end
		inc rcx
		jmp _loop

_end:
		mov rax, rdi
		ret
