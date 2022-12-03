	.file	"HeaderDemo.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "Area is : %fn\0"
LC3:
	.ascii "Value of no is : %dn\0"
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
	movl	$11, 24(%esp)
	flds	LC0
	fstps	44(%esp)
	flds	44(%esp)
	fldl	LC1
	fmulp	%st, %st(1)
	flds	44(%esp)
	fmulp	%st, %st(1)
	fstps	40(%esp)
	leal	24(%esp), %eax
	movl	%eax, 36(%esp)
	flds	40(%esp)
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	36(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
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
LC0:
	.long	1106562253
	.align 8
LC1:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
