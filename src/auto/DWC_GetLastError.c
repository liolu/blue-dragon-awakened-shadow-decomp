#include "m2c.h"

extern M2C_UNK stDwcLastError;

s32 DWC_GetLastError(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(&stDwcLastError, s32 *, 4);
    }
    return M2C_FIELD(&stDwcLastError, s32 *, 0);
}
