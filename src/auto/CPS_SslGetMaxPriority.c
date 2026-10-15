#include "m2c.h"

extern M2C_UNK sConfig;

s32 CPS_SslGetMaxPriority(void) {
    return M2C_FIELD(&sConfig, s32 *, 4);
}
