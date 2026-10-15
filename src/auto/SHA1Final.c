#include "m2c.h"

M2C_UNK Sha1PutBigEndian(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK SHA1Update(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK sSha1Padding;

void SHA1Final(void *arg0, M2C_UNK *arg1) {
    s32 temp_r0;
    s32 var_r2;

    Sha1PutBigEndian(arg1, arg0 + 0x14, 8);
    temp_r0 = ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3) & 0x3F;
    if (temp_r0 < 0x38) {
        var_r2 = 0x38 - temp_r0;
    } else {
        var_r2 = 0x78 - temp_r0;
    }
    SHA1Update(arg0, &sSha1Padding, var_r2);
    SHA1Update(arg0, arg1, 8);
    Sha1PutBigEndian(arg1, arg0, 0x14);
}
