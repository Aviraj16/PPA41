	.file	"structure8.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Size of structure is : %d \12\0"
LC1:
	.ascii "Size of union is : %d \12\0"
LC5:
	.ascii "%f\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$16, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$11, 32(%esp)
	flds	LC2
	fstps	36(%esp)
	fldl	LC3
	fstpl	40(%esp)
	flds	LC4
	fstps	24(%esp)
	flds	24(%esp)
	fstpl	4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	fldl	24(%esp)
	fstpl	4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.section .rdata,"dr"
	.align 4
LC2:
	.long	1119197594
	.align 8
LC3:
	.long	0
	.long	1079418880
	.align 4
LC4:
	.long	1119145165
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef