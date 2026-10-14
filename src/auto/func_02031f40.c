#include "m2c.h"

M2C_UNK func_0200a0e0(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0210adc0;

s32 func_02031f40(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_0210adc0, s32 *, 8)) {
        return 0;
    }
    func_0200a0e0(arg0, 0);
    M2C_FIELD(&data_0210adc0, s32 *, 8) = (s32) (M2C_FIELD(&data_0210adc0, s32 *, 8) | arg0);
    return 1;
}
