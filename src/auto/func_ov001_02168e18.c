/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s16 func_ov001_0216943c(u16);
extern void func_ov001_02169360(s16 *, s32, s16);
extern void func_ov001_02168f2c(s32, s16 *, s16, s32, s16 *, void *, s32);
extern u8 data_ov001_021953a0;

void func_ov001_02168e18(s32 a0, s16 *a1, s32 a2, s16 *a3, s16 *a4, s32 a5) {
    if (a0 == 1) {
        *a4 = 1;
        func_ov001_02168f2c(a2, a1 + 2, *a3, a5, a1 + 1, &data_ov001_021953a0, 8);
        *a1 = func_ov001_0216943c((u16) *a3);
        *a3 = *a3 + 4;
        return;
    }
    func_ov001_02169360(a1, a2, *a3);
}
