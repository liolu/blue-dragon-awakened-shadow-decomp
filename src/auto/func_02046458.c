#include "m2c.h"

extern u64 OS_GetTick();
extern void func_02046760(void *, void *, s32, s32);
extern s32 func_02046578(void *, s32);
extern s8 func_020460ac(u8);
extern u8 WCM_Bssid_Any;

s32 func_02046458(u8 *arg0) {
    u64 t;
    u8 *t3;
    u32 t2;

    t = ((OS_GetTick() - *(u64 *) (arg0 + 0xCB0)) * 64) / 0x82EA;
    if (t >= 0x96 || ((u32) (*(u8 *) (arg0 + arg0[0xD0F] * 0x24 + 0x300) << 0x1C) >> 0x1C) == 1) {
        t3          = arg0 + 0x300;
        t2          = (u32) arg0[0xD0F] * 0x24;
        *(t3 + t2)  = *(t3 + t2) & ~0xF;
        arg0[0xD0F] = arg0[0xD0F] + 1;
        if ((u32) arg0[0xD10] <= (u32) arg0[0xD0F]) {
            arg0[0xD15] = arg0[0xD15] + 1;
            arg0[0xD0F] = 0;
            arg0[0xD11] = func_020460ac(arg0[0xD15]);
        }
        if ((s8) arg0[0xD11] < 0) {
            arg0[0xD15] = 0;
            return func_02046578(arg0, 5);
        }
        *(u64 *) (arg0 + 0xCB0) = OS_GetTick();
        func_02046760(&WCM_Bssid_Any, (void *) (arg0[0xD0F] * 0x24 + (s32) (arg0 + 0x304)), (s8) arg0[0xD11], 0x300000);
    }
    return 5;
}
