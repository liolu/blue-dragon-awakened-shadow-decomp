#include "m2c.h"

s8 GOADecryptByte(M2C_UNK, u8);                      /* extern */

void GOADecrypt(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = 0;
    if (arg2 <= 0) {
        return;
    }
    do {
        *(s8 *) (arg1 + var_r4) = GOADecryptByte(arg0, *(s8 *) (arg1 + var_r4));
        var_r4 += 1;
    } while (var_r4 < arg2);
}