#include "m2c.h"

M2C_UNK func_020bf86c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov000_02167368(s32, M2C_UNK);          /* extern */

void func_020c74d0(void *arg0) {
    s32 temp_r0;

    func_020bf86c(M2C_FIELD(arg0, s32 *, 8), 0, 0);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x430);
    if (temp_r0 == 0) {
        return;
    }
    func_ov000_02167368(temp_r0, 3);
    func_ov000_02167368(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x430), 0);
}
