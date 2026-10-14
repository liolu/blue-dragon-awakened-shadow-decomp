#include "m2c.h"

void *func_0208a680(s32);                           /* extern */
M2C_UNK func_020c175c(s32);                         /* extern */
s32 func_020c3248(s32);                             /* extern */
s32 func_020c3558();                                /* extern */
M2C_UNK func_ov000_02174448();                      /* extern */

s32 func_02086df4(s32 *arg0) {
    s32 temp_r5;
    void *temp_r0;

    temp_r0 = func_0208a680(*arg0);
    temp_r5 = M2C_FIELD(temp_r0, s32 *, 0x10);
    if ((temp_r5 != 0) && (func_020c3248(temp_r5) != 0)) {
        func_020c175c(temp_r5 + 0x1C);
        if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
            return 0;
        }
        if (func_020c3558() == 0) {
            return 0;
        }
        func_ov000_02174448();
        return 1;
    }
    return 0;
}
