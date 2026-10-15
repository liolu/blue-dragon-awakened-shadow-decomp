#include "m2c.h"

M2C_UNK gsifree(s32);                         /* extern */

void gpiStatusInfoKeyFree(void *arg0) {
    gsifree(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    gsifree(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
