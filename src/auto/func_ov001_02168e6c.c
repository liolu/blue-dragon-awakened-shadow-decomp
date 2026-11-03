/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s16 func_ov001_0216943c(u16);
void func_ov001_02169360(void *, s32, s32);

void func_ov001_02168e6c(s16 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4, s8 arg5, s32 arg6) {
    arg0[0]           = func_ov001_0216943c((u16) 1);
    arg0[1]           = 0;
    arg0[2]           = 0;
    arg0[3]           = func_ov001_0216943c((u16) arg1);
    arg0[4]           = 0;
    arg0[5]           = func_ov001_0216943c((u16) arg2);
    arg0[6]           = func_ov001_0216943c((u16) arg3);
    ((s8 *) arg0)[14] = arg4;
    ((s8 *) arg0)[15] = arg5;
    func_ov001_02169360(arg0 + 8, arg6, 8);
}
