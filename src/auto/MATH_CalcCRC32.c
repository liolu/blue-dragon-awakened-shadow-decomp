#include "m2c.h"

M2C_UNK MATHi_CRC32UpdateRev(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 MATH_CalcCRC32(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp0;

    sp0 = -1;
    MATHi_CRC32UpdateRev(arg0, &sp0, arg1, arg2);
    return ~sp0;
}
