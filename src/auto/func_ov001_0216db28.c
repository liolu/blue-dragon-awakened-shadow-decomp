#include "m2c.h"

typedef struct {
    s32 slot[4];
    u8 p[6];
    s8 b16;
    u8 b17;
} G;

extern u8 data_ov001_0219257c[];
extern u8 data_ov001_02192560[];
extern G *data_ov001_02196b08;
G *func_ov001_02187d70(s32, s32);
s32 func_ov001_02186c94(s32, s32, s32);
void func_ov001_02186aec(s32, s32, s32);
void func_ov001_0216dcf4(s32);
s32 func_ov001_0218903c(s32, void *, s32, s32);
extern u8 func_ov001_0216dd88;

void func_ov001_0216db28(s32 a0) {
    s32 cnt = data_ov001_0219257c[a0];
    s32 i;
    u8 *p;
    data_ov001_02196b08      = func_ov001_02187d70(0x1C, 4);
    data_ov001_02196b08->b16 = -2;
    data_ov001_02196b08->b17 = a0;
    i                        = 0;
    if (cnt > 0) {
        p = data_ov001_02192560 + a0 * 2;
        do {
            data_ov001_02196b08->slot[i] = func_ov001_02186c94(0, *p, 1);
            func_ov001_02186aec(data_ov001_02196b08->slot[i], -1, 1);
            i++;
            p++;
        } while (i < cnt);
    }
    data_ov001_02196b08->slot[2] = func_ov001_02186c94(0, 1, 1);
    func_ov001_02186aec(data_ov001_02196b08->slot[2], -1, 1);
    func_ov001_0216dcf4(0xC0);
    data_ov001_02196b08->slot[3] = func_ov001_0218903c(0, &func_ov001_0216dd88, 0, 0x78);
}
