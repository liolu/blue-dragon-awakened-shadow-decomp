#include "m2c.h"

M2C_UNK gsifree(s32);                         /* extern */

void RefStringFree(s32 *arg0) {
    gsifree(*arg0);
}
