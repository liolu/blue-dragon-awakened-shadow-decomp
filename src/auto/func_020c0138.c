#include "m2c.h"

void *func_0207d4a4(M2C_UNK);                       /* extern */

void func_020c0138(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        return;
    }
    temp_r0 = func_0207d4a4(0x38);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0)    = 0;
        M2C_FIELD(temp_r0, s32 *, 4)    = 0;
        M2C_FIELD(temp_r0, s32 *, 8)    = 0;
        M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
        M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_r0, s16 *, 0x34) = 0;
    }
    M2C_FIELD(arg0, void **, 4)                         = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0x30)                     = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x34) = 0;
}
