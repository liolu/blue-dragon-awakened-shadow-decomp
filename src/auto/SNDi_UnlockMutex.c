#include "m2c.h"

M2C_UNK OS_UnlockMutex(M2C_UNK *);                   /* extern */
extern M2C_UNK sSndMutex;

void SNDi_UnlockMutex(void) {
    OS_UnlockMutex(&sSndMutex);
}
