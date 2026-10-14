#include "m2c.h"

M2C_UNK func_02026d64(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020d16c8(s32);                         /* extern */
extern M2C_UNK func_020d1cc8;
extern M2C_UNK func_020d1cdc;

s32 func_020d1c88(s32 arg0) {
    func_02026d64(arg0, 3, 0x20, &func_020d1cc8, &func_020d1cdc);
    func_020d16c8(arg0);
    return arg0;
}
