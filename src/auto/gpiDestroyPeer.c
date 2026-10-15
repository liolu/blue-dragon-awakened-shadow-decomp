#include "m2c.h"

M2C_UNK ArrayFree();                            /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void gpiDestroyPeer(s32 arg0, void *arg1) {
    gsifree(M2C_FIELD(arg1, void **, 0x1C));
    M2C_FIELD(arg1, void **, 0x1C) = NULL;
    gsifree(M2C_FIELD(arg1, void **, 0x2C));
    M2C_FIELD(arg1, void **, 0x2C) = NULL;
    if (M2C_FIELD(arg1, s32 *, 0x3C) != 0) {
        ArrayFree();
        M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    }
    gsifree(arg1);
}
