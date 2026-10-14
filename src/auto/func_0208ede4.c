#include "m2c.h"

void **func_0208c3f8(s16);                          /* extern */

s32 func_0208ede4(void *arg0) {
    M2C_UNK var_r1;
    void **temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        M2C_FIELD(*temp_r0, M2C_UNK (**)(void **, M2C_UNK), 0x14)(temp_r0, var_r1);
    }
    return 0;
}
