#include "m2c.h"

void *func_0208a680(s32);                           /* extern */
M2C_UNK func_020c175c(s32);                         /* extern */
M2C_UNK func_020c32b8(s32);                         /* extern */
s32 func_020c3558();                                /* extern */
M2C_UNK func_ov000_0217447c();                      /* extern */

s32 func_02086e5c(s32 *arg0) {
    s32 temp_r5;
    void *temp_r0;

    temp_r0 = func_0208a680(*arg0);
    temp_r5 = M2C_FIELD(temp_r0, s32 *, 0x10);
    if (temp_r5 != 0) {
        func_020c175c(temp_r5 + 0x1C);
        func_020c32b8(temp_r5);
        if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
            return 0;
        }
        if (func_020c3558() == 0) {
            return 0;
        }
        func_ov000_0217447c();
        return 1;
    }
    return 0;
}
