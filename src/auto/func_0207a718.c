#include "m2c.h"

u8 func_0207a718(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        return 0U;
    }
    if (arg1 == 0x3A) {
        return 4U;
    }
    return M2C_FIELD(temp_r0, u8 *, 4);
}
