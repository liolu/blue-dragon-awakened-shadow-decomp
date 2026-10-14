#include "m2c.h"

M2C_UNK func_02090abc();                            /* extern */
extern M2C_UNK data_020fddd0;

void *func_02090a70(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fddd0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    func_02090abc(arg0);
    return arg0;
}
