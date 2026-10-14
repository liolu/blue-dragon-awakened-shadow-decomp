#include "m2c.h"

M2C_UNK func_02001548(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02002000(s32, M2C_UNK *, M2C_UNK *);   /* extern */
s32 func_02028e20();                                /* extern */
s32 func_0202906c();                                /* extern */
extern M2C_UNK data_021059f4;
extern M2C_UNK data_02105bf4;

M2C_UNK *func_02029178(void) {
    u8 sp0[64];
    s32 temp_r4;
    s32 temp_r5;

    if (!(M2C_FIELD(&data_021059f4, s32 *, 0xFC) & 0x40)) {
        temp_r5 = func_02028e20();
        temp_r4 = func_0202906c();
        func_02001548(temp_r5, sp0);
        func_02002000(temp_r4, sp0, &data_02105bf4);
        M2C_FIELD(&data_021059f4, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021059f4, s32 *, 0xFC) | 0x40);
    }
    return &data_02105bf4;
}
