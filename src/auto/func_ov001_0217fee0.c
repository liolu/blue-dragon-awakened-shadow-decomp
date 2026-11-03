#include "m2c.h"

typedef struct S24 {
    s32 h;
    u8 pad4[8];
    s32 fC;
    u8 pad10[9];
    u8 b19;
    u8 b1A;
    u8 b1B;
} S24;

s32 func_ov001_02186aec(s32, s32, s32);
s32 func_ov001_021869fc(s32, s32, s32, s32);
s32 func_ov001_02186c94(s32, u8, s32);
void func_ov001_02187934(s32, s32, void *);
S24 *func_ov001_02187d70(s32, s32);
s32 func_ov001_0218903c(s32, void *, s32, s32);
extern u8 data_ov001_02192e2c[];
extern S24 *data_ov001_02196c40;
extern u8 func_ov001_02180058;

void func_ov001_0217fee0(u8 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    data_ov001_02196c40      = func_ov001_02187d70(0x20, 4);
    data_ov001_02196c40->b1B = arg0;
    data_ov001_02196c40->b19 = arg1;
    data_ov001_02196c40->b1A = arg4;
    func_ov001_02187934(arg2, arg3, (u8 *) data_ov001_02196c40 + 0x10);
    data_ov001_02196c40->h = func_ov001_02186c94(0, data_ov001_02192e2c[arg0], 1);
    func_ov001_021869fc(data_ov001_02196c40->h, -1, arg2, arg3 + arg4);
    func_ov001_02186aec(data_ov001_02196c40->h, -1, 1);
    data_ov001_02196c40->fC = func_ov001_0218903c(0, &func_ov001_02180058, 0, 0x80);
}
