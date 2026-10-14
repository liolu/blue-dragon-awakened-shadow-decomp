#include "m2c.h"

M2C_UNK func_ov000_02172bb8(s32, s32, s32);         /* extern */

s32 func_020d95d0(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_ov000_02172bb8(M2C_FIELD(temp_r0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
