#include "m2c.h"

M2C_UNK func_02077f14(s32);                         /* extern */

void *func_020da1f0(void *arg0) {
    func_02077f14(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
