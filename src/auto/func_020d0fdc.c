#include "m2c.h"

s32 FX_Div(M2C_UNK, s32);                    /* extern */
void *func_020d09c4();                              /* extern */

void func_020d0fdc(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_020d09c4();
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x14) = FX_Div(0x1000, arg2 << 0xC);
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
}
