global _ft_strlen


section .text

_ft_strlen:
    mov     rcx,0			 ; initialize counter
_loop:
	cmp     [rdi], byte 0	 ; check null byte
    jz		_done			 ; string ends, jump
    inc		rdi				 ; point to next string character
	inc		rcx				 ; increase count
	jmp		_loop

_done:
	mov		rax, rcx
	ret
