/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 SOC_SendTo(s32, s32, s32, s32, s8 *);

void func_ov001_021693e4(s32 a0, s32 a1, s32 a2, s32 a3, s8 *p, s32 v) {
    *p = (s8) v;
    SOC_SendTo(a0, a1, a2, a3, p);
}
