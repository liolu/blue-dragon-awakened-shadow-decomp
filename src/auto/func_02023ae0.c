#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02023ae0(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023b54
    cmn ip, r3, lsl #0x1
    bhs L_02023b68
L_02023af4:
    orrs ip, r3, r1
    bmi L_02023b24
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_02023b10:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02023b24:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_02023b54:
    bne L_02023b10
    cmp r0, #0x0
    bhi L_02023b10
    cmn ip, r3, lsl #0x1
    blo L_02023af4
L_02023b68:
    bne L_02023b10
    cmp r2, #0x0
    bhi L_02023b10
    b L_02023af4
}
// clang-format on
