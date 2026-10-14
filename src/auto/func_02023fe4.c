#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02023fe4(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    blo L_02024038
    cmp r3, r1, lsl #0x1
    blo L_02024038
    orr r3, r0, r1
    movs r3, r3, lsl #0x1
    moveq r0, #0x1
    bne L_02024018
    mrs ip, cpsr
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02024018:
    cmp r0, r1
    moveq r0, #0x1
    movne r0, #0x0
    mrs ip, cpsr
    orreq ip, ip, #0x40000000
    bicne ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02024038:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
