#include "m2c.h"

s32 func_02087008(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    var_r2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r1 < 0) {
        do {
            var_r1 += 0x168000;
        } while (var_r1 < 0);
    }
    if (var_r1 > 0x168000) {
        do {
            var_r1 -= 0x168000;
        } while (var_r1 > 0x168000);
    }
    if (var_r2 < 0) {
        do {
            var_r2 += 0x168000;
        } while (var_r2 < 0);
    }
    if (var_r2 > 0x168000) {
        do {
            var_r2 -= 0x168000;
        } while (var_r2 > 0x168000);
    }
    var_r1_2 = var_r1 - var_r2;
    if (var_r1_2 < 0) {
        var_r1_2 = 0 - var_r1_2;
    }
    if (var_r1_2 > 0xB4000) {
        var_r1_2 = 0 - (0x168000 - var_r1_2);
    }
    if (var_r1_2 < 0) {
        var_r1_2 = 0 - var_r1_2;
    }
    if (var_r1_2 <= (s32) M2C_FIELD(arg0, s32 *, 8)) {
        return 1;
    }
    return 0;
}
