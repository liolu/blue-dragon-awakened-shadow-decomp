#include "m2c.h"

s32 func_020c3558();                                /* extern */
M2C_UNK func_ov000_02173c74(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov000_0218b20c();                      /* extern */

void func_020c3a64(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020c3558();
    if (temp_r0 != 0) {
        func_ov000_02173c74(temp_r0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_ov000_0218b20c();
}
