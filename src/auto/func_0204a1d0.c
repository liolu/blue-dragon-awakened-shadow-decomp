#include "m2c.h"

M2C_UNK func_02009978(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02037f5c(void *);                      /* extern */

void func_0204a1d0(void *arg0) {
    func_02009978(arg0 + 0x1138, 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0x1174) = 0xB68;
    M2C_FIELD(arg0, s32 *, 0x1178) = (s32) M2C_FIELD(arg0, s32 *, 0x19CC);
    M2C_FIELD(arg0, s32 *, 0x1180) = 0x5EA;
    M2C_FIELD(arg0, s32 *, 0x1184) = (s32) M2C_FIELD(arg0, s32 *, 0x19D0);
    func_02037f5c(arg0 + 0x1138);
}
