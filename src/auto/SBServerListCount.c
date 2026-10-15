#include "m2c.h"

M2C_UNK ArrayLength(s32);                         /* extern */

void SBServerListCount(void *arg0) {
    ArrayLength(M2C_FIELD(arg0, s32 *, 4));
}
