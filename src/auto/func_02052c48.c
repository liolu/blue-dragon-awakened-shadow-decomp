#include "m2c.h"
s32 func_02054470(void *, u8 *, s32);
u32 strtoul(void *, void *, s32);
void func_0205450c(s32, s32, s32, s32, u32 *, s32);
void func_02052c48(s32 unused, s32 b, u8 *p) {
    u8 buf[16];
    u32 arr[0x80];
    s32 i = 0;
    do {
        if (func_02054470(buf, p + 1, i) == -1) {
            break;
        }
        arr[i] = strtoul(buf, 0, 10);
        i++;
    } while (i < 0x80);
    func_0205450c(*p, b, 0, 0, arr, i);
}
