#include "m2c.h"

M2C_UNK func_020d85ac(s32);                         /* extern */
M2C_UNK func_020dbe40(void *, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_ov000_021bcbac(M2C_UNK *, M2C_UNK);    /* extern */
extern M2C_UNK data_ov000_021f3004;

void func_020d7f64(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    func_020d85ac(arg0 + 0x350);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x350);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x354);
    func_ov000_021bcbac(&data_ov000_021f3004, 0xC);
    func_020dbe40(arg0 + 0x148, temp_r4, temp_r5, 2, 1);
}
