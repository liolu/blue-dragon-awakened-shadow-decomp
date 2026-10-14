#include "m2c.h"

s32 func_020c5620();                                /* extern */

void func_020c7634(void *arg0, s32 arg1) {
    if (func_020c5620() == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0x30) & 1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x130) = 5;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0x384;
    M2C_FIELD(arg0, s32 *, 0x214) = arg1;
}
