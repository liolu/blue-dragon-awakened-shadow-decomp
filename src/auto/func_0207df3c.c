#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);                    /* extern */
extern M2C_UNK data_02110430;

void func_0207df3c(s32 arg0) {
    GXx_SetMasterBrightness_(0x0400006C, arg0);
    M2C_FIELD(&data_02110430, s32 *, 8) = arg0;
}
