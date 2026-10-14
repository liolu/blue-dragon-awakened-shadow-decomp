#include "m2c.h"

s32 func_020c3558(s32);                             /* extern */
M2C_UNK func_ov000_02174428(s32, M2C_UNK);          /* extern */

void func_020bf28c(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020c3558(M2C_FIELD(arg0, s32 *, 0xC));
    func_ov000_02174428(temp_r0, 0);
    func_ov000_02174428(temp_r0, 3);
    func_ov000_02174428(temp_r0, 4);
    func_ov000_02174428(temp_r0, 5);
}
