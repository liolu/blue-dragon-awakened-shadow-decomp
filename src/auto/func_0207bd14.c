#include "m2c.h"

M2C_UNK func_02009a34(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0207b2a4(s32, void *);                 /* extern */

void func_0207bd14(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_r0 != NULL) {
        temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x4C);
        M2C_FIELD(arg0, s32 *, 0x54) = temp_r0_2;
        if ((temp_r0_2 != 0) && (temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x48), (temp_r0_3 != 0))) {
            func_02009a34(temp_r0_3, arg0 + 0xDC, 0x10);
        }
        func_0207b2a4(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}
