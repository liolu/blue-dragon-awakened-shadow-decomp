#include "m2c.h"

s32 WMi_CheckInitialized();                                /* extern */
extern M2C_UNK wmInitialized;

s32 WMi_GetStatusAddress(void) {
    if (WMi_CheckInitialized() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), s32 *, 4);
}
