#include "m2c.h"

s32 func_020c5620();                                /* extern */
M2C_UNK func_020cb8f4(void *);                      /* extern */

void func_020ce220(void *arg0) {
    if (func_020c5620() == 0) {
        M2C_FIELD(arg0, s32 *, 0x130) = 0xB;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x130) == 0xC) && (M2C_FIELD(arg0, u8 *, 0x2E) == 0)) {
        func_020cb8f4(arg0);
    }
}
