#include "m2c.h"

M2C_UNK func_02007a64(s32, s32);                    /* extern */
extern M2C_UNK data_020e4b28;

void func_02031218(void *arg0) {
    M2C_UNK (*temp_r4)(s32, s32, s32);

    temp_r4 = *((M2C_UNK *)((s8 *)&data_020e4b28 + (M2C_FIELD(arg0, s32 *, 0) * 4)));
    func_02007a64(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_r4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
