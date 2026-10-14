#include "m2c.h"

s32 func_020102f4(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02010978();                            /* extern */
extern M2C_UNK data_02103a18;
extern M2C_UNK func_02010968;

s32 func_02010370(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020102f4(arg0, arg1, &func_02010968, 0);
    M2C_FIELD(&data_02103a18, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_02010978();
    }
    return M2C_FIELD(&data_02103a18, s32 *, 0x2C);
}
