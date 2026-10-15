#include "m2c.h"

M2C_UNK SBReleaseStr(M2C_UNK, s32);                /* extern */

void KeyValFree(void *arg0) {
    SBReleaseStr(0, M2C_FIELD(arg0, s32 *, 0));
    SBReleaseStr(0, M2C_FIELD(arg0, s32 *, 4));
}
