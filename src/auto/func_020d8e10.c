#include "m2c.h"

s32 func_020d8e10(void **arg0) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0_2 = *arg0;
    if (temp_r0_2 == NULL) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r0_2, void **, 0x10);
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r0, s32 *, 0x334);
}
