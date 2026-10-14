#include "m2c.h"

M2C_UNK func_020ab810(s32);                         /* extern */

s32 func_020d93a0(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020ab810(M2C_FIELD(temp_r0, s32 *, 0xC));
    return 0;
}
