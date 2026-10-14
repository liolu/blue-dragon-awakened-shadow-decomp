#include "m2c.h"
#include "engine.h"

M2C_UNK func_020238bc(M2C_UNK, M2C_UNK);
M2C_UNK func_020244fc(M2C_UNK);
M2C_UNK func_02024570(M2C_UNK);
M2C_UNK func_020248d0(M2C_UNK, M2C_UNK);

s32 func_02091838(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    var_r0_2 = arg0;
    if (var_r0_2 < 0) {
        do {
            var_r0_2 += 0x168000;
        } while (var_r0_2 < 0);
    }
    if (var_r0_2 > 0x168000) {
        do {
            var_r0_2 -= 0x168000;
        } while (var_r0_2 > 0x168000);
    }
    var_r2 = 0;
    var_r3 = 0;
    var_r1 = 0x16800;
loop_5:
    if (var_r1 > var_r0_2) {
        var_r2 = var_r3;
    } else {
        var_r3 += 1;
        var_r1 += 0x2D000;
        if (var_r3 < 8) {
            goto loop_5;
        }
    }
    temp_r1 = var_r2 * 0x168;
    temp_r0 = (s32) (temp_r1 + ((u32) (temp_r1 >> 2) >> 0x1D)) >> 3;
    temp_r0_2 = temp_r0 << 0xC;
    if (temp_r0 > 0) {
        var_r0 = func_020238bc(0x3F000000, func_02024570(temp_r0_2));
    } else {
        var_r0 = func_020248d0(func_02024570(temp_r0_2), 0x3F000000);
    }
    return func_020244fc(var_r0);
}
