#include "m2c.h"

void gpiSetErrorString(s32 *, s32);
s32 func_02064ba0(s32, s32, s32);
extern u8 data_020fa980[];

s32 func_0205e350(s32 *p, s32 a1, s32 a2) {
    s32 obj;

    if (p == NULL || *p == 0) {
        return 2;
    }
    obj = *p;
    if (*(s32 *) (obj + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (obj + 0x1f4) == 4) {
        gpiSetErrorString(p, (s32) data_020fa980);
        return 2;
    }
    return func_02064ba0((s32) p, a1, a2);
}
