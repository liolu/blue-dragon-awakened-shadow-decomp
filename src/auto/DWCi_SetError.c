#include "m2c.h"

extern M2C_UNK stDwcLastError;

void DWCi_SetError(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&stDwcLastError, s32 *, 0) != 9) {
        M2C_FIELD(&stDwcLastError, s32 *, 0) = arg0;
        M2C_FIELD(&stDwcLastError, s32 *, 4) = arg1;
    }
}
