#include "m2c.h"

M2C_UNK func_0203ff6c(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_020406d4(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK data_020f914c;

void func_0204078c(void *arg0, M2C_UNK *arg1) {
    s32 temp_r0;
    s32 var_r2;

    func_0203ff6c(arg1, arg0 + 0x14, 8);
    temp_r0 = ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3) & 0x3F;
    if (temp_r0 < 0x38) {
        var_r2 = 0x38 - temp_r0;
    } else {
        var_r2 = 0x78 - temp_r0;
    }
    func_020406d4(arg0, &data_020f914c, var_r2);
    func_020406d4(arg0, arg1, 8);
    func_0203ff6c(arg1, arg0, 0x14);
}
