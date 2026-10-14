#include "m2c.h"

void *func_02027c08(void *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_02027da0(void *arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r0 = func_02027c08(arg0 + 0x24, 0x10, 4);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0) = arg1;
    M2C_FIELD(temp_r0, s32 *, 4) = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_r0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    M2C_FIELD(arg0, void **, 0x2C) = temp_r0;
    return 1;
}
