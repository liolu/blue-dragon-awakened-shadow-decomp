#include "m2c.h"

extern s32 data_0210adc0;

void func_02031fdc(s32 arg0) {
    data_0210adc0 &= ~arg0;
}
