#include "m2c.h"

M2C_UNK func_02061e38(void **, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0206ab10(void **, s32, s32 *);             /* extern */
M2C_UNK func_0206ad24(void **, s32, M2C_UNK *);     /* extern */
extern M2C_UNK data_020fb16c;

s32 func_02063600(void **arg0) {
    s32 sp0;
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *arg0;
    temp_r0 = func_0206ab10(arg0, M2C_FIELD(temp_r4, s32 *, 0x1F0), &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (sp0 == 4) {
        func_0206ad24(arg0, 0x107, &data_020fb16c);
        func_02061e38(arg0, 4, 1);
        return 4;
    }
    if (sp0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_r4, s32 *, 0x1F4) = 2;
    return 0;
}
