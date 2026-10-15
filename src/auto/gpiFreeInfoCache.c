#include "m2c.h"

M2C_UNK gsifree(void *);                      /* extern */

void gpiFreeInfoCache(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r0 == NULL) {
        return;
    }
    gsifree(M2C_FIELD(temp_r0, void **, 0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 4));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 4) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x14) = NULL;
    gsifree(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC8) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
}
