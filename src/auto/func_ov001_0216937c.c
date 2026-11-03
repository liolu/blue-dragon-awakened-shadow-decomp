/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void SOC_RecvFrom(s32, s32, s32, s32, u8 *);

void func_ov001_0216937c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg5, s32 *arg6) {
    *arg5 = (u8) *arg6;
    SOC_RecvFrom(arg0, arg1, arg2, arg3, arg5);
}
