#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dneq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023e44
    cmn ip, r3, lsl #0x1
    bhs L_02023e58
L_02023df0:
    orrs ip, r3, r1
    bmi L_02023e20
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_02023e0c:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02023e20:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_02023e44:
    bne L_02023e0c
    cmp r0, #0x0
    bhi L_02023e0c
    cmn ip, r3, lsl #0x1
    blo L_02023df0
L_02023e58:
    bne L_02023e0c
    cmp r2, #0x0
    bhi L_02023e0c
    b L_02023df0
}
// clang-format on
