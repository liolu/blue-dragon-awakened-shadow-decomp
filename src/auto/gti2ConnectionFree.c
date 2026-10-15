#include "m2c.h"

M2C_UNK gti2ConnectionCleanup(s32);                         /* extern */

void gti2ConnectionFree(s32 *arg0) {
    gti2ConnectionCleanup(*arg0);
}
