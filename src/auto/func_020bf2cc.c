#include "m2c.h"

s32 func_020bf2cc(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10);
    if (temp_r0 == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(temp_r0, s32 *, 8) <= 0) {
        return 1;
    }
    return 0;
}
