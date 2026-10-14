#include "m2c.h"

M2C_UNK func_02007580(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02007a48(s32, M2C_UNK);                /* extern */
M2C_UNK func_02009a34(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0200b27c(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02012448();                                /* extern */
extern M2C_UNK data_02104368;

s32 func_0201254c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02012448();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02009a34(arg0, temp_r0, arg1);
    func_02007a48(temp_r0, arg1);
    temp_r4 = func_0200b27c(0xA, temp_r0, 0);
    func_02007580(&data_02104368, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
