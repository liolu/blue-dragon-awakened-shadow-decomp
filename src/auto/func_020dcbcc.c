#include "m2c.h"

M2C_UNK func_ov000_021afb00();                      /* extern */

void func_020dcbcc(void *arg0, void *arg1) {
    func_ov000_021afb00();
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
