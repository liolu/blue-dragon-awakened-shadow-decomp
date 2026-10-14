#include "m2c.h"

s32 func_0207f974(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x18);
    if (temp_r0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x28) == 3) {
        return 1;
    }
    return 0;
}
