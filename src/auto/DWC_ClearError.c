#include "m2c.h"

extern M2C_UNK stDwcLastError;

void DWC_ClearError(void) {
    if (M2C_FIELD(&stDwcLastError, s32 *, 0) != 9) {
        M2C_FIELD(&stDwcLastError, s32 *, 0) = 0;
        M2C_FIELD(&stDwcLastError, s32 *, 4) = 0;
    }
}
