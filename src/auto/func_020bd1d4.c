#include "m2c.h"

s32 func_ov000_021755fc(s32, s32, M2C_UNK);         /* extern */
extern s32 data_ov000_021ee0f8;

s32 func_020bd1d4(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == -1) {
        return 0;
    }
    return func_ov000_021755fc(data_ov000_021ee0f8, temp_r1, arg1);
}
