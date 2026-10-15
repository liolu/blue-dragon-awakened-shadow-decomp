#include "m2c.h"

M2C_UNK gsifree(void *);                      /* extern */

void gpiRemoveBuddyStatus(void *arg0) {
    gsifree(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    gsifree(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    gsifree(arg0);
}
