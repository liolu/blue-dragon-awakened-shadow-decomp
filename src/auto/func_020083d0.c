#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020081f4();
extern void func_02008204();
extern char data_02101c28[];
extern char data_02101c2c[];
extern char data_02101c30[];
extern char data_02101c54[];
// clang-format off
asm void func_020083d0(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02101c28
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_020081f4
    ldr r0, =data_02101c54
    ldr r1, =data_02101c2c
    ldr r1, [r1, #0x0]
    ldr ip, =data_02101c30
    ldr ip, [ip, #0x0]
    ldr lr, =0x2008420
    bx ip
    bl func_02008204
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
