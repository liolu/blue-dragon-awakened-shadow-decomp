#include "m2c.h"

M2C_UNK func_02031948();                            /* extern */
extern M2C_UNK *data_020f8ecc;
extern M2C_UNK *data_020f8ed0;
extern M2C_UNK data_0210897c;
extern M2C_UNK func_02031844;
extern M2C_UNK func_020318d4;

void func_020317ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_0210897c, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_0210897c, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0210897c, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_0210897c, s32 *, 0x18) = arg3;
    func_02031948();
    if (arg4 == 0) {
        return;
    }
    data_020f8ecc = &func_02031844;
    data_020f8ed0 = &func_020318d4;
}
