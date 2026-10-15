#include "m2c.h"

s32 readNvram(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK nv_result;

s32 DWCi_BM_GetApInfo(M2C_UNK arg0) {
    if (readNvram(M2C_FIELD(&nv_result, s32 *, 8), 0x300, arg0) != 0) {
        return 1;
    }
    return 0;
}
