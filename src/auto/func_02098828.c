#include "engine.h"
#include "m2c.h"

void func_02028348(M2C_UNK, M2C_UNK);

void func_02098828(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;
    s32 var_r6;

    var_r5 = 0;
    var_r6 = arg0;
    do {
        temp_r0 = *(M2C_UNK *) var_r6;
        if (temp_r0 != 0) {
            func_02028348(temp_r0, 0);
        }
        var_r5 += 1;
        var_r6 += 0x34;
    } while (var_r5 < 0x20);
}
