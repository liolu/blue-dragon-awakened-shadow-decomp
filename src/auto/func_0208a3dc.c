#include "m2c.h"

s32 func_020824f8(s32, s32, M2C_UNK);               /* extern */
extern s32 data_02164e04;
extern M2C_UNK data_0216636c;

s32 func_0208a3dc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (arg0 != (M2C_FIELD(&data_0216636c, s8 *, 0xA4) - 1)) {
        temp_r0 = func_020824f8(data_02164e04, arg0, arg1);
        M2C_FIELD(&data_0216636c, s32 *, 0xA0) = temp_r0;
        if (temp_r0 != 0) {
            M2C_FIELD(&data_0216636c, s8 *, 0xA4) = (s8) (arg0 + 1);
        } else {
            M2C_FIELD(&data_0216636c, s8 *, 0xA4) = 0;
        }
    }
    return M2C_FIELD(&data_0216636c, s32 *, 0xA0);
}
