#include "m2c.h"

extern M2C_UNK data_0210adc0;

void func_02032040(s32 arg0) {
    M2C_FIELD(&data_0210adc0, s32 *, 4) = (s32) (M2C_FIELD(&data_0210adc0, s32 *, 4) & ~(1 << arg0));
}
