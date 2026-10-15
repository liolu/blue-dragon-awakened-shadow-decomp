#include "m2c.h"

M2C_UNK MD5Update(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK SHA1Update(s32);                         /* extern */

void SSLi_UpdateHandshakeHash(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    SHA1Update(arg0 + 0x2EC);
    MD5Update(arg0 + 0x3A4, arg1, arg2);
}
