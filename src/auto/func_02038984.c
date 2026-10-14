#include "m2c.h"

M2C_UNK func_020387a8(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK data_021019a4;

void func_02038984(void) {
    s32 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_021019a4, void **, 4), void **, 0xA4);
    if (temp_r4 != NULL) {
        temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x60);
        if (temp_r1 != 0) {
            func_020387a8(M2C_FIELD(temp_r4, s32 *, 0x5C), temp_r1, 0, 0);
            M2C_FIELD(temp_r4, s32 *, 0x60) = 0;
        }
    }
}
