#include "m2c.h"

M2C_UNK func_020d18f0(void *);                      /* extern */
M2C_UNK func_020d2098(M2C_UNK);                     /* extern */

void func_020d1e9c(void *arg0) {
    s8 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s8 *, 0x958);
    if ((s32) temp_r3 <= -1) {
        return;
    }
    if ((s32) temp_r3 > 0x17) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x9C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x9C9) = 0;
    M2C_FIELD(arg0, s8 *, 0x9CA) = 0;
    M2C_FIELD(arg0, s8 *, 0x95C) = (s8) M2C_FIELD(arg0, s8 *, 0x958);
    func_020d18f0(arg0 + 0x960);
    func_020d2098(0);
}
