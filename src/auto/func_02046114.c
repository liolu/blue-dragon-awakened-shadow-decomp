#include "m2c.h"

u8 *func_020449a8(s32);
long long OS_GetTick(void);
void func_02046760(void *, void *, s32, s32);
extern u8 WCM_Bssid_Any;
extern u8 WCM_Essid_Any;

void func_02046114(s32 a0) {
    u8 *p = func_020449a8(0x10);
    switch (a0) {
        case 3:
            *(long long *) (p + 0xCB0) = OS_GetTick();
            func_02046760(&WCM_Bssid_Any, &WCM_Essid_Any, *(s8 *) (p + 0xD11), 0x200000);
            break;
        case 4:
            *(long long *) (p + 0xCB0) = OS_GetTick();
            func_02046760(p + 0x474 + p[0xD0F] * 0xC0, p + 0x47C + p[0xD0F] * 0xC0, *(u16 *) (p + 0x4A6 + p[0xD0F] * 0xC0) - 1,
                          0x300000);
            break;
        case 5:
            *(long long *) (p + 0xCB0) = OS_GetTick();
            func_02046760(&WCM_Bssid_Any, p + 0x304 + p[0xD0F] * 0x24, *(s8 *) (p + 0xD11), 0x300000);
            break;
    }
}
