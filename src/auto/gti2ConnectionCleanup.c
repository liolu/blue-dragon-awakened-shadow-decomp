#include "m2c.h"

M2C_UNK ArrayFree();                            /* extern */
M2C_UNK gsifree();                      /* extern */

void gti2ConnectionCleanup(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        gsifree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        gsifree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        gsifree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        ArrayFree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        ArrayFree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        ArrayFree();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        ArrayFree();
    }
    gsifree(arg0);
}
