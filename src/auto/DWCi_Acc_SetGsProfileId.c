#include "m2c.h"

void DWCi_Acc_SetGsProfileId(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
