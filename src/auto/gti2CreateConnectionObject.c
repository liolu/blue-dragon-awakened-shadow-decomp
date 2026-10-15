#include "m2c.h"

M2C_UNK gsimalloc(M2C_UNK);                     /* extern */

void gti2CreateConnectionObject(void) {
    gsimalloc(0xA0);
}
