#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020d16c8(s32);                         /* extern */
extern M2C_UNK func_020d1cdc;
extern M2C_UNK func_020d1cf0;

s32 func_020d1d88(s32 arg0) {
    func_020d16c8(arg0 + 0x960);
    func_02026e14(arg0 + 0x960, 3, 0x20, &func_020d1cdc);
    func_02026e14(arg0, 0x17, 0x68, &func_020d1cf0);
    return arg0;
}
