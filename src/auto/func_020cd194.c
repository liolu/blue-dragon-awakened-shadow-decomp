#include "m2c.h"

s32 func_020ab854(s32);                             /* extern */
M2C_UNK func_020cb8f4(void *);                      /* extern */

void func_020cd194(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x130) != 7) {
        return;
    }
    if (func_020ab854(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        return;
    }
    func_020cb8f4(arg0);
}
