#include "m2c.h"

extern M2C_UNK OS_IrqHandler;

s32 WcmCpsifTryLockMutexInIRQ(void *arg0) {
    M2C_UNK *temp_r2;

    temp_r2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &OS_IrqHandler;
        M2C_FIELD(arg0, s32 *, 0xC)    = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        return 1;
    }
    if (temp_r2 != &OS_IrqHandler) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    return 1;
}
