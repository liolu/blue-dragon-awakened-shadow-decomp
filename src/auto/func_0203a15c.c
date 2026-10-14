#include "m2c.h"

s32 func_02039f2c(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK func_0203a094(s32, s32);                    /* extern */
s32 func_0203a20c();                                /* extern */
extern M2C_UNK func_0203a198;

s32 func_0203a15c(void) {
    s32 temp_r0;

    temp_r0 = func_0203a20c();
    if (temp_r0 == 0) {
        return -0x31;
    }
    func_0203a094(temp_r0, func_02039f2c(&func_0203a198, temp_r0, 1));
    return temp_r0;
}
