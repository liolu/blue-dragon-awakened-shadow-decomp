#include "m2c.h"

M2C_UNK func_020ac68c(s32, M2C_UNK);                /* extern */

s32 func_020d9378(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020ac68c(M2C_FIELD(temp_r0, s32 *, 0xC), 0);
    return 0;
}
