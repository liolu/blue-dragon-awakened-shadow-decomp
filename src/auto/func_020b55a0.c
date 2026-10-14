#include "m2c.h"

s32 func_0208a180();                                /* extern */
M2C_UNK func_020b4fa8(void *, s32);                 /* extern */
M2C_UNK func_020b50c0(void *, s32);                 /* extern */
M2C_UNK func_020b51ec(void *, s32);                 /* extern */
M2C_UNK func_020b5548(void *, M2C_UNK);             /* extern */
s32 func_ov000_021d973c(s32);                       /* extern */
s32 func_ov000_021d9750();                          /* extern */
extern u8 data_02167176;
extern void *data_ov000_021ee5e8;
extern s32 data_ov000_021f6270;

void func_020b55a0(void *arg0) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r5;

    if (data_ov000_021f6270 == 0) {
        return;
    }
    if (func_ov000_021d9750() == 0) {
        return;
    }
    if (func_0208a180() == 0) {
        return;
    }
    if (func_ov000_021d973c(data_ov000_021f6270) == 0) {
        return;
    }
    if (M2C_FIELD(data_ov000_021ee5e8, u8 *, 0xD4) == 3) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (data_02167176 & 1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4AC) != 0) {
        if ((var_r2 == 0) && (var_r1 == 0)) {
            goto block_24;
        }
        func_020b5548(arg0, 0);
        return;
    }
    if ((var_r2 == 0) && (var_r1 == 0)) {
        func_020b5548(arg0, 1);
    }
block_24:
    if (M2C_FIELD(arg0, u8 *, 0x4AC) == 0) {
        return;
    }
    var_r5 = 0;
    do {
        func_020b4fa8(arg0, var_r5);
        func_020b51ec(arg0, var_r5);
        func_020b50c0(arg0, var_r5);
        var_r5 += 1;
    } while (var_r5 < 0x18);
}
