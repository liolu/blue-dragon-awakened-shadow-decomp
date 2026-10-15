#include "m2c.h"

s32 func_ov000_021b0604(M2C_UNK *, M2C_UNK, s32);   /* extern */
extern M2C_UNK data_ov000_021e6eb4;
extern M2C_UNK data_ov000_021eef10;

s32 func_0207f8e8(void *arg0, s32 arg1) {
    if (arg1 == -1) {
        return 0;
    }
    return func_ov000_021b0604(
        &data_ov000_021eef10, 2,
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x2C) + (*((s16 *) ((s8 *) &data_ov000_021e6eb4 + (arg1 * 2))) * 4)), s32 *, 0x28));
}
