#include "m2c.h"

M2C_UNK ArrayFree();                            /* extern */
M2C_UNK gsifree(void *);                      /* extern */
M2C_UNK gpiFreeInfoCache(void *);                      /* extern */

void gpiProfilesTableFree(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        gsifree(M2C_FIELD(temp_r0, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8) = NULL;
        gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC) = NULL;
        gsifree(M2C_FIELD(arg0, void **, 8));
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r0_2 != NULL) {
        gsifree(M2C_FIELD(temp_r0_2, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 8) = NULL;
        gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC) = NULL;
        gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = NULL;
        gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14) = NULL;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) != 0) {
            ArrayFree();
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) = 0;
        }
        gsifree(M2C_FIELD(arg0, void **, 0xC));
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    gpiFreeInfoCache(arg0);
    gsifree(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 0x1C));
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
}
