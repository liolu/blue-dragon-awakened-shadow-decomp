#include "m2c.h"

M2C_UNK func_0205cb50(s32);                         /* extern */

void func_02065768(void *arg0) {
    func_0205cb50(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_0205cb50(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
