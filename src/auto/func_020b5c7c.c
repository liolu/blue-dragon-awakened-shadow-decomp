#include "m2c.h"

s32 func_0207c624(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02110134;
extern u8 data_02167176;
extern u8 data_02167189;
extern void *data_ov000_021f6260;

s32 func_020b5c7c(void) {
    if (data_02167176 & 1) {
        return 0;
    }
    if (data_02167189 != 0) {
        return 0;
    }
    if (func_0207c624(&data_02110134) != 6) {
        return 0;
    }
    if ((data_ov000_021f6260 != NULL) && (M2C_FIELD(data_ov000_021f6260, u8 *, 0x18) == 0)) {
        return 0;
    }
    return 1;
}
