#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020d16c8();                            /* extern */
extern M2C_UNK func_020d1cdc;

s32 func_020d1cf0(s32 arg0) {
    func_020d16c8();
    func_02026e14(arg0, 3, 0x20, &func_020d1cdc);
    return arg0;
}
