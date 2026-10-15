#include "m2c.h"

s32 DWCi_Acc_GetGsProfileId(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
