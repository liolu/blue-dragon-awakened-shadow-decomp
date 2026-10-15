#include "m2c.h"

M2C_UNK WcmCpsifUnlockMutexInIRQ(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210e5fc;

void WcmCpsifKACallback(void) {
    WcmCpsifUnlockMutexInIRQ(&data_0210e5fc);
}
