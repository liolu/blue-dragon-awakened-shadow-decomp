#include "m2c.h"
typedef struct {
    s32 f0, f4, f8, fc, f10, f14;
    u8 f18;
} S;
void OS_Terminate(void);
u8 func_ov001_021723c4(void);
s32 func_ov001_021724d8(s32, s32);
s32 func_ov001_0218553c(void);
void func_ov001_021852f0(void *, S *);
u8 *func_ov001_02187d70(s32, s32);
s32 func_ov001_0218903c(s32, void *, s32, s32);
extern S data_ov001_021936c0;
extern u8 *data_ov001_02196b90;
extern s32 data_ov001_02196b98;
extern u8 func_ov001_021726bc;
void func_ov001_0217251c(s32 arg0) {
    S s;
    u8 *r;

    r                            = func_ov001_02187d70(0x1E2A4, 0x20);
    data_ov001_02196b90          = r;
    *(s32 *) (r + 0x1E298)       = arg0;
    data_ov001_02196b90[0x1E2A0] = 0;
    data_ov001_02196b90[0x1E2A1] = 0;
    s                            = data_ov001_021936c0;
    s.f4                         = func_ov001_021724d8(data_ov001_02196b98, 0);
    s.f8                         = func_ov001_021724d8(data_ov001_02196b98, 1);
    s.f18                        = func_ov001_021723c4();
    func_ov001_021852f0(data_ov001_02196b90, &s);
    if (func_ov001_0218553c() == 0) {
        OS_Terminate();
    }
    *(s32 *) (data_ov001_02196b90 + 0x1E29C) = func_ov001_0218903c(0, &func_ov001_021726bc, 0, 0x78);
}
