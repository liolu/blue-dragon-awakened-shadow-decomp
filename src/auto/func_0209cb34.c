#include "m2c.h"

s32 func_ov000_021c0650(M2C_UNK *, s32, s16);       /* extern */
M2C_UNK func_ov000_021c0b74(M2C_UNK *, s32, s32);   /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_0209cb34(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = func_ov000_021c0650(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0), (s16) M2C_FIELD(arg0, s32 *, 8));
    if (temp_r4 > 0) {
        func_ov000_021c0b74(&data_ov000_021f4d24, temp_r5, temp_r4);
    }
    return temp_r5;
}
