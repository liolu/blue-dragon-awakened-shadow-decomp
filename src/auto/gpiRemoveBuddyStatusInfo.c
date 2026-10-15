#include "m2c.h"

M2C_UNK ArrayFree(s32);                         /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void gpiRemoveBuddyStatusInfo(void *arg0) {
    gsifree(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    ArrayFree(M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    gsifree(arg0);
}
