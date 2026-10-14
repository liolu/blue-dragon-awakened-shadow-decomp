#include "m2c.h"

M2C_UNK func_020016f8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021059f4;
extern M2C_UNK data_02105a40;
extern M2C_UNK data_02105af4;

M2C_UNK *func_02028e20(void) {
    if (!(M2C_FIELD(&data_021059f4, s32 *, 0xFC) & 8)) {
        func_020016f8(&data_02105a40, &data_02105af4);
        M2C_FIELD(&data_021059f4, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021059f4, s32 *, 0xFC) | 8);
    }
    return &data_02105af4;
}
