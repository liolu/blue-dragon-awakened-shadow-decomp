#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);                   /* extern */
extern M2C_UNK wcmCpsifw;
extern M2C_UNK data_0210e5fc;

void WCMi_InitCpsif(void) {
    if (M2C_FIELD(&wcmCpsifw, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&wcmCpsifw, u8 *, 0)     = 1U;
    M2C_FIELD(&wcmCpsifw, s32 *, 0x24) = 0;
    M2C_FIELD(&wcmCpsifw, s32 *, 8)    = 0;
    M2C_FIELD(&wcmCpsifw, s32 *, 4)    = 0;
    OS_InitMutex(&data_0210e5fc);
}
