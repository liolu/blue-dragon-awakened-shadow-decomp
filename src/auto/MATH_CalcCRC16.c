#include "m2c.h"

M2C_UNK MATHi_CRC16UpdateRev(M2C_UNK, u16 *, M2C_UNK, M2C_UNK); /* extern */

u16 MATH_CalcCRC16(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp0;

    sp0 = 0;
    MATHi_CRC16UpdateRev(arg0, &sp0, arg1, arg2);
    return sp0;
}
