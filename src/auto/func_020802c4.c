#include "m2c.h"

s32 func_020802c4(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x1C);
    }
    return 0;
}
