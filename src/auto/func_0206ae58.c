#include "m2c.h"

s32 func_0206b24c(void *, M2C_UNK);                 /* extern */
void *func_0206b2e8();                              /* extern */

s32 func_0206ae58(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_0206b2e8();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    return func_0206b24c(temp_r0, arg2);
}
