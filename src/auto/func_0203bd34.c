#include "m2c.h"

M2C_UNK func_020072b4(M2C_UNK);                     /* extern */
s32 func_02008b44();                                /* extern */
extern s32 data_0210ca6c;
extern s32 data_0210e264;
extern s32 data_0210e268;

s32 func_0203bd34(void) {
    if (data_0210ca6c == 0) {
        if (((data_0210e268 & 3) == 1) && (func_02008b44() != 0x12)) {
            func_020072b4(0xA);
        }
    } else if (data_0210e264 == 0) {
        data_0210e264 = data_0210ca6c;
    }
    return data_0210ca6c;
}
