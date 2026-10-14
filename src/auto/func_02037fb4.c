#include "m2c.h"

s16 func_02037e70();                                /* extern */
extern M2C_UNK data_021019a4;
extern M2C_UNK data_0210ca1c;

void func_02037fb4(s16 arg0, u16 arg1, s32 arg2) {
    s32 var_r2;
    void *temp_r4;

    var_r2 = arg2;
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_021019a4, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (var_r2 == 0x7F000001) {
        var_r2 = M2C_FIELD(&data_0210ca1c, s32 *, 0x50);
    }
    M2C_FIELD(temp_r4, u16 *, 0x1A) = arg1;
    M2C_FIELD(temp_r4, u16 *, 0x18) = (u16) M2C_FIELD(temp_r4, u16 *, 0x1A);
    M2C_FIELD(temp_r4, s32 *, 0x20) = var_r2;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = var_r2;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s16 *, 0xA) = arg0;
        return;
    }
    M2C_FIELD(temp_r4, s16 *, 0xA) = func_02037e70();
}
