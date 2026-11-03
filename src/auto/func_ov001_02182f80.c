#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    s32 h;
    u16 cnt;
    u8 pad2;
    s8 f;
} S;
extern S *data_ov001_02196c5c;
void func_ov001_021890e4(s32, s32);
s32 func_ov001_0218903c(s32, s32, s32, s32);
void func_ov001_021832e0(void);
void func_ov001_02182f80(s32 a) {
    data_ov001_02196c5c->f = -1;
    data_ov001_02196c5c->cnt++;
    if (data_ov001_02196c5c->cnt >= 0x78) {
        func_ov001_021890e4(0, a);
        data_ov001_02196c5c->h = func_ov001_0218903c(1, (s32) func_ov001_021832e0, 0, 0x78);
    }
}
