#include "m2c.h"

M2C_UNK func_ov000_02188f50();                      /* extern */

void func_020bfee8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x74) & 4) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    func_ov000_02188f50();
}
