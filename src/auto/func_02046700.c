#include "m2c.h"

s32 func_02045ad0(M2C_UNK);                         /* extern */
s8 func_020460ac(M2C_UNK);                          /* extern */
s32 func_020462e8(void *);                          /* extern */

s32 func_02046700(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0xD16) != 0) && (func_02045ad0(2) != 0)) {
        M2C_FIELD(arg0, s8 *, 0xD11) = func_020460ac(0);
        return 5;
    }
    if ((u32) ((u32) (M2C_FIELD(arg0, u8 *, 0xD0B) << 0x18) >> 0x1C) >= 1U) {
        return 6;
    }
    return func_020462e8(arg0);
}
