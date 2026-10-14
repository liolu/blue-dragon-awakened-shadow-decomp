#include "m2c.h"

void *func_020449a8(M2C_UNK);                       /* extern */
s32 func_02044b5c(u8);                              /* extern */
M2C_UNK func_0204b30c();                            /* extern */
s32 func_0204b46c();                                /* extern */
s32 func_0204b4ac();                                /* extern */

s32 func_02046a28(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_020449a8(1);
    temp_r0 = func_0204b46c();
    if (temp_r0 != 0) {
        if (M2C_FIELD(temp_r4, u8 *, 0x15) == func_02044b5c(M2C_FIELD(arg0, u8 *, 0xD0D))) {
            M2C_FIELD(temp_r4, s32 *, 0x10) = func_0204b4ac();
        }
        func_0204b30c();
        if (temp_r0 == 0xB) {
            return 0xF;
        }
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0xD13) * 4)), s8 *, 0x444) = 1;
        return 0xB;
    }
    return 0xE;
}
