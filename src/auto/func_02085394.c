#include "m2c.h"

s32 func_0208a680(s32);                             /* extern */
M2C_UNK func_020bf18c(s32, s32, s32);               /* extern */
M2C_UNK func_020c0c58(s32, s32);                    /* extern */

void func_02085394(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0208a680(M2C_FIELD(arg0, s32 *, 0));
    temp_r0 = func_0208a680(M2C_FIELD(arg0, s32 *, 4));
    func_020c0c58(temp_r0, 0x40500);
    func_020bf18c(temp_r5, temp_r0, M2C_FIELD(arg0, s32 *, 8));
}
