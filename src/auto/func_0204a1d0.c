#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK CPS_SocRegister(void *);                      /* extern */

void func_0204a1d0(void *arg0) {
    MI_CpuFill8(arg0 + 0x1138, 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0x1174) = 0xB68;
    M2C_FIELD(arg0, s32 *, 0x1178) = (s32) M2C_FIELD(arg0, s32 *, 0x19CC);
    M2C_FIELD(arg0, s32 *, 0x1180) = 0x5EA;
    M2C_FIELD(arg0, s32 *, 0x1184) = (s32) M2C_FIELD(arg0, s32 *, 0x19D0);
    CPS_SocRegister(arg0 + 0x1138);
}
