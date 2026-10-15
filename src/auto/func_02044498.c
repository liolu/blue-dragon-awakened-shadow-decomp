#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts();                         /* extern */
M2C_UNK func_02044a00();                         /* extern */
u32 func_02044a60();                                /* extern */
M2C_UNK func_02044b6c();                            /* extern */
s32 func_02044ba4();                                /* extern */
u32 func_0204524c();                                /* extern */
u32 func_020458e4();                                /* extern */
u32 func_02045ed8();                                /* extern */
u32 func_02045fb4();                                /* extern */
u32 func_02046784();                                /* extern */
u32 func_0204680c();                                /* extern */

s32 func_02044498(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    u32 var_r5;

    var_r5 = func_02044a60();
    if (var_r5 == 1) {
        var_r5 = func_02046784();
    } else if (var_r5 < 7U) {
        temp_r4_2 = OS_DisableInterrupts();
        var_r5    = func_02045fb4();
        func_02044a00();
        OS_RestoreInterrupts(temp_r4_2);
    } else if (var_r5 < 9U) {
        var_r5 = func_0204524c();
    } else if (var_r5 < 0xAU) {
        var_r5 = func_02045ed8();
    } else if (var_r5 < 0x10U) {
        var_r5 = func_0204680c();
    } else if (var_r5 == 0x11) {
        var_r5 = func_020458e4();
    }
    func_02044a00(var_r5);
    if (var_r5 == 0x10) {
        temp_r4 = func_02044ba4();
        func_02044b6c();
        return temp_r4;
    }
    if (var_r5 != 0x12) {
        return 0;
    }
    func_02044b6c();
    return -1;
}
