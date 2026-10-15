#include "m2c.h"

M2C_UNK func_0207f090(void *, s32);                 /* extern */
s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_0207e964(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x20) + func_ov000_021bec20(&data_ov000_021f4924);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r1;
    if (temp_r1 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        return;
    }
    do {
        func_0207f090(arg0 + 8, M2C_FIELD(arg0, s32 *, 0x14));
        temp_r1_2                    = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x20) = temp_r1_2;
    } while (temp_r1_2 >= (s32) M2C_FIELD(arg0, s32 *, 0x1C));
}
