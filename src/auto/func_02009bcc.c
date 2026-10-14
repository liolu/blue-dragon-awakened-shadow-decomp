#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009bcc(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
    mov r7, #0x0
    tst r5, #0xf
    bne L_02009be8
    b L_02009bec
L_02009be8:
    mov r7, #0x1
L_02009bec:
    cmp r2, #0x0
    ble L_02009cc4
    ldrb lr, [r0], #0x1
    mov r4, #0x8
L_02009bfc:
    subs r4, r4, #0x1
    blt L_02009bec
    tst lr, #0x80
    bne L_02009c20
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_02009cac
L_02009c20:
    ldrb r5, [r0, #0x0]
    cmp r7, #0x0
    beq L_02009c30
    b L_02009c34
L_02009c30:
    mov r6, #0x3
L_02009c34:
    beq L_02009c78
    tst r5, #0xe0
    bne L_02009c44
    b L_02009c48
L_02009c44:
    mov r6, #0x1
L_02009c48:
    bne L_02009c78
    add r0, r0, #0x1
    and r6, r5, #0xf
    mov r6, r6, lsl #0x4
    tst r5, #0x10
    beq L_02009c70
    mov r6, r6, lsl #0x8
    ldrb r5, [r0], #0x1
    add r6, r6, r5, lsl #0x4
    add r6, r6, #0x100
L_02009c70:
    add r6, r6, #0x11
    ldrb r5, [r0, #0x0]
L_02009c78:
    add r3, r6, r5, asr #0x4
    add r0, r0, #0x1
    and r5, r5, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
L_02009c98:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_02009c98
L_02009cac:
    cmp r2, #0x0
    bgt L_02009cb8
    b L_02009cbc
L_02009cb8:
    mov lr, lr, lsl #0x1
L_02009cbc:
    bgt L_02009bfc
    b L_02009bec
L_02009cc4:
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
