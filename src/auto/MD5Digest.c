#include "m2c.h"

M2C_UNK func_02041750(M2C_UNK *);                   /* extern */
M2C_UNK func_0204175c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02041768(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK MD5Print(M2C_UNK *, M2C_UNK);          /* extern */

void MD5Digest(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp10[88];
    u8 sp0[16];

    func_02041750(sp10);
    func_0204175c(sp10, arg0, arg1);
    func_02041768(sp0, sp10);
    MD5Print(sp0, arg2);
}
