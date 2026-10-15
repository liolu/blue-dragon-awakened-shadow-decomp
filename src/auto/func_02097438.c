#include "m2c.h"

void func_02097438(void *arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r3_2;
    s8 temp_ip;
    u8 temp_r1;
    void *temp_r2;

    temp_ip = M2C_FIELD(arg0, s8 *, 0xAA);
    var_r3  = 0;
    if ((s32) temp_ip <= 0) {
        return;
    }
loop_2:
    if (arg1 == M2C_FIELD((arg0 + var_r3), u8 *, 0xB8)) {
        var_r3_2 = var_r3 + 1;
        if (var_r3_2 < (s32) temp_ip) {
            do {
                temp_r2 = arg0 + var_r3_2;
                temp_r1 = M2C_FIELD(temp_r2, u8 *, 0xB8);
                var_r3_2 += 1;
                M2C_FIELD(temp_r2, u8 *, 0xB7) = temp_r1;
            } while (var_r3_2 < (s32) temp_ip);
        }
        M2C_FIELD(arg0, s8 *, 0xAA) = (s8) (M2C_FIELD(arg0, s8 *, 0xAA) - 1);
        return;
    }
    var_r3 += 1;
    if (var_r3 >= (s32) temp_ip) {
        return;
    }
    goto loop_2;
}
