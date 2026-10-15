#include "m2c.h"

extern M2C_UNK sConfig;

void CPS_SetSslHandshakePriority(s32 arg0) {
    M2C_FIELD(&sConfig, s32 *, 4) = arg0;
}
