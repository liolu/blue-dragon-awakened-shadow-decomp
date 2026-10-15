#include "m2c.h"

M2C_UNK MATHi_CRC8Update(M2C_UNK, u8 *, M2C_UNK, M2C_UNK); /* extern */

u8 MATH_CalcCRC8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0;

    sp0 = 0;
    MATHi_CRC8Update(arg0, &sp0, arg1, arg2);
    return sp0;
}
