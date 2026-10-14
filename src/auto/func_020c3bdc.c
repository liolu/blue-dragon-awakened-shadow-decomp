#include "m2c.h"

s32 func_020c3bdc(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x28) == 3) {
        return 1;
    }
    return 0;
}
