#include "m2c.h"

s32 func_ov000_021a11bc();                          /* extern */
M2C_UNK func_ov000_021a37d8(s32, s32);              /* extern */
extern s32 data_ov000_021ee6a0;

s32 func_020c4038(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 4) != 1) {
        return 0x1000;
    }
    if (M2C_FIELD(arg0, s8 *, 5) == 7) {
        func_ov000_021a37d8(data_ov000_021ee6a0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 8));
        if ((u32) (u16) (func_ov000_021a11bc() + 0xFFB3) <= 2U) {
            return 0x11EC;
        }
    }
    return 0x1000;
}
