#include "m2c.h"

M2C_UNK func_020adcb8(void *);                      /* extern */
M2C_UNK func_020add7c();                            /* extern */

void *func_020adc5c(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 5;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x4650;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x4B0;
    func_020add7c(arg0);
    func_020adcb8(arg0);
    return arg0;
}
