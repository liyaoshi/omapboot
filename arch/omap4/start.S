.text
.globl _start

_start:
		bl aboot
		b .

.global enable_irqs
enable_irqs:
	cpsie I
	bx lr
