section .text
bits 64
default rel
global dotProduct_asm

;dotProduct(double *vectorA, double *vectorB, int size)

dotProduct_asm:
; variables:  rcx = double vecA, rdx = double vecB, r8 = int size
    xorps xmm0, xmm0
    xor rax, rax ;i

    Loop:

        movsd xmm1, [rcx + rax*8]
        mulsd xmm1, [rdx + rax*8]
        addsd xmm0, xmm1

        inc rax 

        cmp rax, r8
        jl Loop

    ret
