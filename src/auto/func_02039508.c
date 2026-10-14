#include "m2c.h"

M2C_UNK func_02037f88();                            /* extern */
M2C_UNK func_02037fb4(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02038014();                            /* extern */
M2C_UNK func_02038048();                            /* extern */
s32 func_02039058(s32);                             /* extern */
s32 func_02039160(s32, s32);                        /* extern */
extern M2C_UNK data_0210ca1c;

s32 func_02039508(u32 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r7;
    u32 temp_r1;

    func_02038014();
    func_02037f88();
    if (arg1 == 1) {
        func_02037fb4(0x44, 0x43, M2C_FIELD(&data_0210ca1c, s32 *, 0x20));
    } else {
        func_02037fb4(0x44, 0x43, -1);
    }
    var_r7 = 0;
loop_4:
    temp_r0 = func_02039160(func_02039058(arg1), var_r7);
    if (temp_r0 == 0) {
        var_r7 += 1;
        if (var_r7 < 4) {
            goto loop_4;
        }
    }
    func_02038048();
    if (temp_r0 == 2) {
        *arg0 = (u32) M2C_FIELD(&data_0210ca1c, u32 *, 0x4C) >> 1;
        M2C_FIELD(&data_0210ca1c, u32 *, 0x38) = (u32) ((u32) (M2C_FIELD(&data_0210ca1c, u32 *, 0x4C) * 3) >> 3);
        return 1;
    }
    temp_r1 = (u32) M2C_FIELD(&data_0210ca1c, u32 *, 0x38) >> 1;
    M2C_FIELD(&data_0210ca1c, u32 *, 0x38) = temp_r1;
    *arg0 = temp_r1;
    switch (arg1) {                                 /* irregular */
    case 1:
        if (temp_r1 < 0x3CU) {
            *arg0 = 1;
            M2C_FIELD(&data_0210ca1c, u32 *, 0x38) = (u32) ((u32) M2C_FIELD(&data_0210ca1c, u32 *, 0x4C) >> 3);
        }
        break;
    case 2:
        if (temp_r1 < 0x3CU) {
            *arg0 = 1;
        }
        break;
    }
    return 0;
}
