#include "m2c.h"

void func_020b1920(s32 arg0) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;

    var_r0 = arg0;
    if (var_r0 > 0) {
        var_r1 = 0;
loop_2:
        if (var_r0 < 0x168000) {
            return;
        }
        var_r1 += 1;
        if (var_r0 > 0xE10000) {
            var_r0 -= 0xE10000;
        } else {
            var_r0 -= 0x168000;
        }
        if (var_r1 >= 0x100) {
            return;
        }
        goto loop_2;
    }
    var_r2 = 0;
loop_10:
    if (var_r0 >= 0) {
        return;
    }
    var_r2 += 1;
    if (var_r0 < -0xE10000) {
        var_r0 += 0xE10000;
    } else {
        var_r0 += 0x168000;
    }
    if (var_r2 >= 0x100) {
        return;
    }
    goto loop_10;
}
