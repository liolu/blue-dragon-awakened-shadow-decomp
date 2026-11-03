#include "m2c.h"

s32 func_ov001_0217236c();                                /* extern */
extern M2C_UNK data_ov001_02192594;

s32 func_ov001_0216e514(void) {
    return *((M2C_UNK *) ((s8 *) &data_ov001_02192594 + (func_ov001_0217236c() * 4)));
}
