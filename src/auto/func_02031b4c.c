#include "m2c.h"

M2C_UNK func_02031cb0();                            /* extern */
extern M2C_UNK *data_020f8ed4;
extern M2C_UNK *data_020f8ed8;
extern M2C_UNK data_02108998;
extern M2C_UNK func_02031ba0;
extern M2C_UNK func_02031c6c;

void func_02031b4c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_02108998, s32 *, 8) = arg0;
    M2C_FIELD(&data_02108998, s32 *, 0xC) = arg1;
    M2C_FIELD(&data_02108998, s32 *, 0x10) = arg2;
    func_02031cb0();
    if (arg3 == 0) {
        return;
    }
    data_020f8ed4 = &func_02031ba0;
    data_020f8ed8 = &func_02031c6c;
}
