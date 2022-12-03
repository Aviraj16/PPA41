	.file	"selection1.c"
	.text
	.globl	_CheckEven
	.def	_CheckEven;	.scl	2;	.type	32;	.endef
_CheckEven:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	L2
	movl	$1, %eax
	jmp	L3
L2:
	movl	$0, %eax
L3:
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter Number\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "It is even Number\0"
LC3:
	.ascii "It is Odd Number\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 24(%esp)
	movb	$0, 31(%esp)
	movl	$LC0, (%esp)
	call	_puts
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_CheckEven
	movb	%al, 31(%esp)
	cmpb	$0, 31(%esp)
	je	L5
	movl	$LC2, (%esp)
	call	_puts
	jmp	L6
L5:
	movl	$LC3, (%esp)
	call	_puts
L6:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
