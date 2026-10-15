#include "m2c.h"

s32 *func_0204e520(s32, s32);                       /* extern */
M2C_UNK func_0205313c(s32, s32);                    /* extern */
void *func_02059234();                              /* extern */
M2C_UNK gt2CloseConnectionHard(s32);                         /* extern */

s32 func_02056db4(s32 arg0) {
    s32 *temp_r0;

    M2C_FIELD(func_02059234(), s32 *, 0x20C) = arg0;
    temp_r0                                  = func_0204e520(arg0, M2C_FIELD(func_02059234(), u8 *, 0xD) + 1);
    if (temp_r0 != NULL) {
        M2C_FIELD(func_02059234(), s8 *, 0x1A8) = 2;
        gt2CloseConnectionHard(*temp_r0);
        M2C_FIELD(func_02059234(), s8 *, 0x1A8) = 0;
        return 1;
    }
    func_0205313c(arg0, M2C_FIELD(func_02059234(), u8 *, 0xD) + 1);
    return 0;
}
