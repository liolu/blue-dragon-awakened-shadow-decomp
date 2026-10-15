#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dgr(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023bec
    cmn ip, r3, lsl #0x1
    bhs L_02023c00
L_02023b8c:
    orrs ip, r3, r1
    bmi L_02023bbc
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02023ba8:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02023bbc:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02023bec:
    bne L_02023ba8
    cmp r0, #0x0
    bhi L_02023ba8
    cmn ip, r3, lsl #0x1
    blo L_02023b8c
L_02023c00:
    bne L_02023ba8
    cmp r2, #0x0
    bhi L_02023ba8
    b L_02023b8c
}
// clang-format on
