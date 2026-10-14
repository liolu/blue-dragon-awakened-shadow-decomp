#include "m2c.h"

s32 func_ov000_021c0cac(M2C_UNK *, s32, M2C_UNK);   /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_0209837c(void *arg0, M2C_UNK arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r1 == -1) {
        return 0;
    }
    return func_ov000_021c0cac(&data_ov000_021f4d24, temp_r1, arg1);
}
