#include "m2c.h"

void *func_020449a8(M2C_UNK);                       /* extern */
s8 func_02044b5c(u8);                               /* extern */

void func_02044a00(u8 arg0) {
    void *temp_r4;
    void *temp_r5;

    temp_r5 = func_020449a8(1);
    temp_r4 = func_020449a8(0x10);
    M2C_FIELD(temp_r5, u8 *, 9) = arg0;
    if ((u32) arg0 >= 0x10U) {
        return;
    }
    if ((u32) arg0 > (u32) M2C_FIELD(temp_r5, u8 *, 0x16)) {
        M2C_FIELD(temp_r5, u8 *, 0x16) = arg0;
        if ((u32) arg0 > 7U) {
            M2C_FIELD(temp_r5, s8 *, 0x15) = func_02044b5c(M2C_FIELD(temp_r4, u8 *, 0xD0D));
            M2C_FIELD(temp_r5, u8 *, 0x14) = (u8) M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), u8 *, 0x444);
        }
    }
}
