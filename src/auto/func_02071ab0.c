#include "m2c.h"

extern s32 CanReceiveOnSocket(u8 *p);
extern s32 recvfrom(u8 *p, u8 *buf, s32 max, s32 zero, u32 *pa, u32 *pn);
extern void func_02072dd4(u8 *o, u8 *buf, u32 idx, u32 *pa);
extern u8 data_0210fc4c[];

void func_02071ab0(u8 *o) {
    u32 a[2];
    u32 n = 8;
    s32 r;

    if (*(u32 *) (o + 0xc4) == 0) {
        return;
    }
    if (CanReceiveOnSocket(*(u8 **) o) == 0) {
        return;
    }
    do {
        r = recvfrom(*(u8 **) o, data_0210fc4c, 0xff, 0, &a[0], &n);
        if (r != -1) {
            data_0210fc4c[r] = 0;
            func_02072dd4(o, data_0210fc4c, r, &a[0]);
        }
    } while (CanReceiveOnSocket(*(u8 **) o) != 0);
}
