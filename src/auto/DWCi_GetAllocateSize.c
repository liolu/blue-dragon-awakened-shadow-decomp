#include "m2c.h"

void *DWCi_GetAllocateHeader();                              /* extern */

s32 DWCi_GetAllocateSize(void) {
    return M2C_FIELD(DWCi_GetAllocateHeader(), s32 *, 4);
}
