global _ft_strcmp


_ft_strcmp:
		mov rax, 0
		mov rcx, 0
_loop:
		mov al, [rdi]
		mov cl, [rsi]
		cmp al, cl
		jnz _end
		cmp al, 0
		jz _end
		cmp cl, 0 
		jz _end
		inc rdi
		inc rsi
		jmp _loop
_end:
		sub rax, rcx
		ret
