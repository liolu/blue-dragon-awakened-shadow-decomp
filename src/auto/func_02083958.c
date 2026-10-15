#include "m2c.h"

M2C_UNK func_ov000_0216b230(s32);                   /* extern */
M2C_UNK func_ov000_0216ca9c(s32);                   /* extern */
M2C_UNK func_ov000_021a0448(void *, M2C_UNK);       /* extern */
extern M2C_UNK data_02165788;
extern void *data_ov000_021ee5e8;

s32 func_02083958(void *arg0) {
    s32 temp_r2;
    s32 temp_r4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r2 == 0xF004) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_ov000_021a0448(data_ov000_021ee5e8 + 0xAC, 1);
        } else {
            func_ov000_0216b230(M2C_FIELD(data_ov000_021ee5e8, s32 *, 0xB0));
        }
    } else {
        temp_r4 = *((M2C_UNK *) ((s8 *) &data_02165788 + ((temp_r2 & 1) * 0xC)));
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_ov000_0216ca9c(temp_r4);
        }
        func_ov000_0216b230(temp_r4);
    }
    return 0;
}
