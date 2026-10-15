#include "m2c.h"

extern M2C_UNK wfailed;

void CPS_SetScavengerCallback(s32 arg0) {
    M2C_FIELD(&wfailed, s32 *, 0x3C) = arg0;
}
