#include "m2c.h"

M2C_UNK func_020072b4(M2C_UNK);                     /* extern */
M2C_UNK func_0203531c(M2C_UNK);                     /* extern */
M2C_UNK func_0203532c();                            /* extern */
s32 func_02039ebc();                                /* extern */
s32 func_0203bb88();                                /* extern */
extern void *data_020f8f00;
extern s32 data_0210ca6c;
extern s32 data_0210e264;
extern M2C_UNK data_0210e270;

s32 func_0203ba3c(void) {
    s32 temp_r0;

    if (data_0210e264 == 0) {
        data_0210e264 = data_0210ca6c;
    }
    if (func_0203bb88() == -0x1A) {
        do {
            func_020072b4(0x64);
        } while (func_0203bb88() == -0x1A);
    }
    temp_r0 = func_02039ebc();
    if (temp_r0 >= 0) {
        func_0203532c();
        func_0203531c(0);
        if (M2C_FIELD(data_020f8f00, s32 *, 0x28) == 0) {
            M2C_FIELD(data_020f8f00, M2C_UNK (**)(s32), 0x1C)(M2C_FIELD(&data_0210e270, s32 *, 0x1C));
        }
        data_020f8f00 = NULL;
    }
    return temp_r0;
}
