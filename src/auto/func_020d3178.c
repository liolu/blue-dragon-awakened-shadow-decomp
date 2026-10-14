#include "m2c.h"

M2C_UNK func_020d31a8();                            /* extern */
extern M2C_UNK data_02167224;

s32 func_020d3178(s32 arg0) {
    func_020d31a8();
    M2C_FIELD(&data_02167224, s32 *, 4) = 0;
    if (M2C_FIELD(&data_02167224, s32 *, 0) == arg0) {
        M2C_FIELD(&data_02167224, s32 *, 0) = 0;
    }
    return arg0;
}
