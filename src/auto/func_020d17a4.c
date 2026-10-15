#include "m2c.h"

extern M2C_UNK data_02101409;

u8 func_020d17a4(void *arg0) {
    s8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0x67);
    if (((s32) temp_r1 <= -1) || ((s32) temp_r1 > 0x17)) {
        return 0U;
    }
    return *((u8 *) ((s8 *) &data_02101409 + (temp_r1 * 5)));
}
