#include "m2c.h"

M2C_UNK func_0205c0e0(s32);                         /* extern */
M2C_UNK func_020738e8(void *);                      /* extern */

void func_02073c5c(void *arg0) {
    func_0205c0e0(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    func_020738e8(arg0 + 0x14);
    func_020738e8(arg0 + 8);
}
