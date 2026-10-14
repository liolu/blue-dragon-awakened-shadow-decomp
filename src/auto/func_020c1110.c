#include "m2c.h"

M2C_UNK func_020bf5a0(void *);                      /* extern */
M2C_UNK func_020c18d4();                            /* extern */
M2C_UNK func_020c4e78(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov000_02189f00();                      /* extern */

void func_020c1110(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_020c18d4();
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_ov000_02189f00();
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_ov000_02189f00();
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r0 != NULL) {
        func_020c4e78(temp_r0, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0xF9) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0xFA) = 0;
    }
    func_020bf5a0(arg0);
}
