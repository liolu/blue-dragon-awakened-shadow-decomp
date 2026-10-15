#include "m2c.h"

M2C_UNK func_020db540(s32);                         /* extern */

void func_020db56c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_020db540(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s8 *, 0x24)  = 0;
}
