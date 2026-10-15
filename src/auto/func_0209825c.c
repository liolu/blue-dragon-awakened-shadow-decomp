#include "m2c.h"

s32 func_ov000_021aff58(void *);                    /* extern */
s32 func_ov000_021c0650(M2C_UNK *, s32, M2C_UNK);   /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_0209825c(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != -1) {
        func_ov000_021c09a0(&data_ov000_021f4d24);
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    }
    temp_r0                     = func_ov000_021c0650(&data_ov000_021f4d24, func_ov000_021aff58(arg0), 0);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
    if (temp_r0 != -1) {
        return 1;
    }
    return 0;
}
