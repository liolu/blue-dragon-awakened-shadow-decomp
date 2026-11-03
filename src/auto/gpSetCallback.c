#include "m2c.h"

extern void *data_020fa95c;
void gpiSetErrorString(s32 *a, void *b);

s32 gpSetCallback(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *ip;
    u8 *base;

    if (arg0 == NULL || (ip = (s32 *) *arg0) == NULL) {
        return 2;
    }
    if (arg1 < 0 || arg1 >= 9) {
        gpiSetErrorString(arg0, &data_020fa95c);
        return 2;
    }
    base                    = (u8 *) ip + (arg1 * 8);
    *(s32 *) (base + 0x1A8) = arg2;
    *(s32 *) (base + 0x1AC) = arg3;
    return 0;
}
