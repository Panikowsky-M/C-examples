	.file	"test.c"
	.text
	.section	.rodata
.LC0:
	.string	"String: %s"
.LC1:
	.string	"Array[%d]: %d\n"
.LC2:
	.string	"%d"
.LC3:
	.string	"%d is %d power of 3"
.LC4:
	.string	"Wrong number !"
	.align 8
.LC5:
	.string	"\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\200\321\203\321\201\321\201\320\272\320\276\320\263\320\276."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	movl	$4, -68(%rbp)
	movl	$5, -64(%rbp)
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -56(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	movslq	%eax, %rdx
	movq	%rdx, %rsi
	movl	$0, %edi
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -48(%rbp)
	movabsq	$8391162081565697396, %rax
	movq	%rax, -37(%rbp)
	movl	$1953719668, -29(%rbp)
	movb	$0, -25(%rbp)
	leaq	-37(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -72(%rbp)
	jmp	.L2
.L3:
	movq	-48(%rbp), %rax
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	movl	-72(%rbp), %ecx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -72(%rbp)
.L2:
	movl	-72(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jl	.L3
	movl	$0, -76(%rbp)
	jmp	.L4
.L5:
	movq	-48(%rbp), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %edx
	movl	-76(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -76(%rbp)
.L4:
	movl	-76(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jl	.L5
	leaq	-84(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-84(%rbp), %eax
	movl	%eax, -60(%rbp)
	jmp	.L6
.L9:
	movl	-84(%rbp), %ecx
	movl	$1431655766, %edx
	movl	%ecx, %eax
	imull	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	addl	%edx, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	testl	%eax, %eax
	jne	.L14
	movl	-84(%rbp), %ecx
	movl	$1431655766, %edx
	movl	%ecx, %eax
	imull	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -84(%rbp)
	addl	$1, -80(%rbp)
.L6:
	movl	-84(%rbp), %eax
	cmpl	$1, %eax
	jg	.L9
	jmp	.L8
.L14:
	nop
.L8:
	cmpl	$0, -80(%rbp)
	jle	.L10
	movl	-80(%rbp), %edx
	movl	-60(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L10:
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L11:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	%rbx, %rsp
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
