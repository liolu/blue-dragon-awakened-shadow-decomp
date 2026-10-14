#include "m2c.h"

extern s32 data_0210adc0;

s32 func_02031fb8(s32 arg0) {
    if (arg0 & data_0210adc0) {
        return 0;
    }
    data_0210adc0 |= arg0;
    return 1;
}
