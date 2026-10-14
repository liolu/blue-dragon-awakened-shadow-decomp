#include "m2c.h"

s32 func_02082408(s32, s32, M2C_UNK);               /* extern */
s32 func_020d00cc();                                /* extern */
extern s32 data_02164e04;

s32 func_020d0140(void) {
    s32 temp_r0;

    temp_r0 = func_020d00cc();
    if (temp_r0 == 0) {
        return 0;
    }
    return func_02082408(data_02164e04, temp_r0, 0);
}
