#include "m2c.h"

s32 func_ov000_021c07b4(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_020983a8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        return 0;
    }
    return func_ov000_021c07b4(&data_ov000_021f4d24);
}
