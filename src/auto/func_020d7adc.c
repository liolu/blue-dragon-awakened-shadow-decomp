#include "m2c.h"

s32 func_ov000_021bec30(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

s32 func_020d7adc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x88C) == 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x890) <= 0) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x890) = (s32) (M2C_FIELD(arg0, s32 *, 0x890) - func_ov000_021bec30(&data_ov000_021f4924));
    return 0;
}
