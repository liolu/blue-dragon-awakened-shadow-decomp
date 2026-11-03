#include "m2c.h"
typedef struct {
    u8 a : 7;
    u8 f : 1;
} Bit7;
extern u64 OS_GetTick(void);
extern s32 func_02046578(u8 *, s32);
extern void func_02046760(u8 *, u8 *, s32, s32);

s32 func_02046330(u8 *o) {
    u64 d  = OS_GetTick() - *(u64 *) (o + 0xcb0);
    u64 ms = (d * 64) / 0x82ea;
    if (ms >= 150 || ((Bit7 *) (o + o[0xd0f] * 4 + 0x447))->f == 1) {
        u8 *e  = o + 0x447;
        u8 *pi = o + 0xd0f;
        s32 idx;
        e[o[0xd0f] * 4] |= 0x80;
        if (o[0xd0f] < o[0xd12]) {
            do {
                if (((Bit7 *) (o + o[0xd0f] * 4 + 0x447))->f == 0) {
                    break;
                }
                *pi = *pi + 1;
            } while (o[0xd0f] < o[0xd12]);
        }
        if (o[0xd12] <= o[0xd0f]) {
            o[0xd0f] = 0;
            return func_02046578(o, 4);
        }
        *(u64 *) (o + 0xcb0) = OS_GetTick();
        idx                  = o[0xd0f] * 0xc0;
        func_02046760(o + 0x474 + idx, o + 0x47c + idx, *(u16 *) (o + idx + 0x400 + 0xa6) - 1, 0x300000);
    }
    return 4;
}
