#include "m2c.h"

M2C_UNK MD5Encode(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK MD5Update(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK sMD5Padding;

void MD5Final(void *arg0, M2C_UNK *arg1) {
    s32 temp_r0;
    s32 var_r2;

    MD5Encode(arg1, arg0 + 0x10, 8);
    temp_r0 = ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 3) & 0x3F;
    if (temp_r0 < 0x38) {
        var_r2 = 0x38 - temp_r0;
    } else {
        var_r2 = 0x78 - temp_r0;
    }
    MD5Update(arg0, &sMD5Padding, var_r2);
    MD5Update(arg0, arg1, 8);
    MD5Encode(arg1, arg0, 0x10);
}
