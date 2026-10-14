#include "m2c.h"

M2C_UNK func_020ab810(s32);                         /* extern */
M2C_UNK func_020ab940(s32, u16);                    /* extern */

void func_020cbec4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x130) == 6) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s8 *, 0x149) > 0) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x100) != 0) {
        return;
    }
    func_020ab810(M2C_FIELD(arg0, s32 *, 0xC));
    func_020ab940(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u16 *, 0xC2));
    M2C_FIELD(arg0, s32 *, 0x130) = 7;
}
