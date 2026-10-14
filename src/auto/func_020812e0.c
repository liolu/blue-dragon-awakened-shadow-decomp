#include "m2c.h"

s32 func_02032bc8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02110600;

void func_020812e0(void *arg0, s32 arg1) {
    u8 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x991) != 0) {
        return;
    }
    if (func_02032bc8(&data_02110600, 0x800, 0, 0x7D00, arg1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x991) = var_r0;
}
