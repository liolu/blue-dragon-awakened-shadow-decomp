#include "m2c.h"

M2C_UNK func_020d856c(s32);                         /* extern */
extern M2C_UNK data_021671d0;

void *func_020d2618(void *arg0) {
    func_020d856c(arg0 + 4);
    M2C_FIELD(&data_021671d0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x5C) = 0;
    if (M2C_FIELD(&data_021671d0, void **, 0x14) == NULL) {
        M2C_FIELD(&data_021671d0, void **, 0x14) = arg0;
    }
    return arg0;
}
