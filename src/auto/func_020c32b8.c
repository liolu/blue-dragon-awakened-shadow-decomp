#include "m2c.h"

M2C_UNK func_020c1628(void *);                      /* extern */
M2C_UNK func_020c184c(void *);                      /* extern */

s32 func_020c32b8(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, void **, 0x14) == NULL) {
        return 0;
    }
    func_020c184c(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 0x18);
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_020c184c(arg0 + 0x10);
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (temp_r1 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r1, u8 *, 0x20) == 0) {
        M2C_FIELD(temp_r1, u8 *, 0x20) = 1U;
    }
    func_020c1628(arg0 + 0x24);
    return 1;
}
