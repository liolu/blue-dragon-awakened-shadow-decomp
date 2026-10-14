#include "m2c.h"

s32 func_020d9b14(void *arg0) {
    void **temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, void ***, 0x18);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK (**)(void **, s32), 0x138)(temp_r0_2, M2C_FIELD(arg0, s32 *, 4));
    }
    return 1;
}
