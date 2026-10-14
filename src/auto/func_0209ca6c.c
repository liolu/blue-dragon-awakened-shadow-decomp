#include "m2c.h"

s32 func_ov000_02173ec4(s32, s32, s32, s32);        /* extern */
s32 func_ov000_02178518(s32, s32);                  /* extern */
extern s32 data_ov000_021ee10c;

s32 func_0209ca6c(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r0 = func_ov000_02178518(data_ov000_021ee10c, M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 == 0) {
        return 0;
    }
    return func_ov000_02173ec4(temp_r0, temp_r5, temp_r4, temp_r6);
}
