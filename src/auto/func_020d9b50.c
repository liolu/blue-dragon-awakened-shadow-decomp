#include "m2c.h"

s32 func_02002e5c();            /* extern */
M2C_UNK func_ov000_02179c08();        /* extern */

u32 func_020d9b50(void *arg0) {
    u8 spC[12];
    u8 sp0[12];
    s32 temp_r1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return 0U;
    }
    if (temp_r4 == 0) {
        return 0U;
    }
    func_ov000_02179c08(spC);
    func_ov000_02179c08(sp0, temp_r4);
    temp_r1 = func_02002e5c(spC, sp0) * 0x64;
    return (u32) ((temp_r1 + ((u32) (temp_r1 >> 0xB) >> 0x14)) * 0x10) >> 0x10;
}
