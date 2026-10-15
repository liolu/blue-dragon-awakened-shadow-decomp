#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0207b2a4(s32, void *);                 /* extern */

void func_0207bcb8(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r0 != NULL) {
        temp_r0_2                    = M2C_FIELD(temp_r0, s32 *, 0x4C);
        M2C_FIELD(arg0, s32 *, 0x50) = temp_r0_2;
        if ((temp_r0_2 != 0) && (temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0x48), (temp_r0_3 != 0))) {
            MI_CpuCopy8(temp_r0_3, arg0 + 0xCC, 0x10);
        }
        func_0207b2a4(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, void **, 0x38) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}
