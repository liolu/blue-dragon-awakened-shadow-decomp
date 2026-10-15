#include "m2c.h"

extern M2C_UNK wmInitialized;

void WMi_SetCallbackTable(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&wmInitialized, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}
