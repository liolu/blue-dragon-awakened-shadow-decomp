#include "m2c.h"

M2C_UNK func_020bd350();                            /* extern */

void func_020bd330(void *arg0) {
    s32 temp_r1;

    temp_r1                   = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r1;
    if (temp_r1 > 0) {
        return;
    }
    func_020bd350();
}
