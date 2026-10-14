#include "m2c.h"

M2C_UNK func_020d283c();                            /* extern */
extern M2C_UNK data_021671d0;

s32 func_020d2658(s32 arg0) {
    func_020d283c();
    if (M2C_FIELD(&data_021671d0, s32 *, 0x14) == arg0) {
        M2C_FIELD(&data_021671d0, s32 *, 0x14) = 0;
    }
    return arg0;
}
