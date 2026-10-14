#include "m2c.h"

M2C_UNK func_02028e64(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021059f4;
extern M2C_UNK data_021059fc;
extern M2C_UNK data_02105bb4;

M2C_UNK *func_0202906c(void) {
    if (!(M2C_FIELD(&data_021059f4, s32 *, 0xFC) & 0x10)) {
        func_02028e64(&data_021059fc, &data_02105bb4);
        M2C_FIELD(&data_021059f4, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021059f4, s32 *, 0xFC) | 0x10);
    }
    return &data_02105bb4;
}
