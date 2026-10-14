#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02023c10(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023c90
    cmn ip, r3, lsl #0x1
    bhs L_02023ca4
L_02023c24:
    orrs ip, r3, r1
    bmi L_02023c58
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_02023c40:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02023c58:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bne L_02023c7c
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_02023c7c:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_02023c90:
    bne L_02023c40
    cmp r0, #0x0
    bhi L_02023c40
    cmn ip, r3, lsl #0x1
    blo L_02023c24
L_02023ca4:
    bne L_02023c40
    cmp r2, #0x0
    bhi L_02023c40
    b L_02023c24
}
// clang-format on
