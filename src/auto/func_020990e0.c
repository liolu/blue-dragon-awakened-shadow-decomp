#include "m2c.h"

M2C_UNK func_02099188();                            /* extern */
extern M2C_UNK data_ov000_021e8c24;
extern M2C_UNK data_ov000_021e8c30;

void func_020990e0(void *arg0, s32 arg1) {
    s32 var_r1;
    void *var_r2;

    func_02099188();
    var_r1 = 0;
    var_r2 = arg0;
    do {
        M2C_FIELD(var_r2, s32 *, 4) = -1;
        var_r1 += 1;
        M2C_FIELD(var_r2, s32 *, 8) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 0);
        M2C_FIELD(var_r2, s32 *, 0xC) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 4);
        M2C_FIELD(var_r2, s32 *, 0x10) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 8);
        M2C_FIELD(var_r2, s32 *, 0x14) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 0);
        M2C_FIELD(var_r2, s32 *, 0x18) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 4);
        M2C_FIELD(var_r2, s32 *, 0x1C) = (s32) M2C_FIELD(&data_ov000_021e8c30, s32 *, 8);
        M2C_FIELD(var_r2, s32 *, 0x20) = (s32) M2C_FIELD(&data_ov000_021e8c24, s32 *, 0);
        M2C_FIELD(var_r2, s32 *, 0x24) = (s32) M2C_FIELD(&data_ov000_021e8c24, s32 *, 4);
        M2C_FIELD(var_r2, s32 *, 0x28) = (s32) M2C_FIELD(&data_ov000_021e8c24, s32 *, 8);
        M2C_FIELD(var_r2, s8 *, 0x2C) = 0;
        var_r2 += 0x2C;
    } while (var_r1 < 4);
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 0xB4) = -1;
}
