#include "m2c.h"

void *func_020449a8(M2C_UNK);                       /* extern */
s8 func_02044a60();                                 /* extern */

void func_02044a7c(s32 arg0) {
    void *temp_r0;

    temp_r0                        = func_020449a8(1);
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0xA)  = func_02044a60();
}
