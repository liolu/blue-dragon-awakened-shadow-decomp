#include "m2c.h"

void *DWCi_GetAllocateHeader(s32);                           /* extern */
extern M2C_UNK (*s_free)(M2C_UNK, void *, s32);

void DWC_Free(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0 = DWCi_GetAllocateHeader(arg1);
    s_free(arg0, temp_r0, M2C_FIELD(temp_r0, s32 *, 4) + 0x20);
}
