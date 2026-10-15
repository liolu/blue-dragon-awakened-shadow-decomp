#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void OS_EnableProtectionUnit();
extern void OS_DisableProtectionUnit();
extern char OSi_DebuggerHandler[];
extern char OSi_UserExceptionHandlerArg[];
extern char OSi_UserExceptionHandler[];
extern char OSi_ExContext[];
// clang-format off
asm void OSi_DisplayExContext(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =OSi_DebuggerHandler
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
    bl OS_EnableProtectionUnit
    ldr r0, =OSi_ExContext
    ldr r1, =OSi_UserExceptionHandlerArg
    ldr r1, [r1, #0x0]
    ldr ip, =OSi_UserExceptionHandler
    ldr ip, [ip, #0x0]
    ldr lr, =0x2008420
    bx ip
    bl OS_DisableProtectionUnit
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
