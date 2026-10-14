#include "m2c.h"

s32 func_0201a2c8(M2C_UNK, s32);                    /* extern */
extern M2C_UNK data_020fccbc;

s32 func_020734b8(M2C_UNK arg0) {
    if ((func_0201a2c8(arg0, M2C_FIELD(&data_020fccbc, s32 *, 0x7C)) == 0) || (func_0201a2c8(arg0, M2C_FIELD(&data_020fccbc, s32 *, 0x80)) == 0)) {
        return 1;
    }
    return 0;
}
