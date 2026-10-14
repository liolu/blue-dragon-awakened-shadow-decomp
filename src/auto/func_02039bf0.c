#include "m2c.h"

s32 func_02039e28(s32);                             /* extern */
s32 func_0203a15c(M2C_UNK *);                       /* extern */
extern void *data_020f8f00;
extern M2C_UNK data_020f8f38;
extern M2C_UNK data_0210e260;

s32 func_02039bf0(void) {
    s32 temp_r0;

    temp_r0 = func_02039e28(M2C_FIELD(data_020f8f00, s32 *, 0x20));
    if (temp_r0 >= 0) {
        M2C_FIELD(&data_0210e260, s32 *, 0xC) = func_0203a15c(&data_020f8f38);
    }
    return temp_r0;
}
