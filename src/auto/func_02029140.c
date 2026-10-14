#include "m2c.h"

M2C_UNK func_020290b0();                            /* extern */
extern M2C_UNK data_021059f4;
extern M2C_UNK data_02105b54;

M2C_UNK *func_02029140(void) {
    if (!(M2C_FIELD(&data_021059f4, s32 *, 0xFC) & 0x80)) {
        func_020290b0();
        M2C_FIELD(&data_021059f4, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021059f4, s32 *, 0xFC) | 0x80);
    }
    return &data_02105b54;
}
