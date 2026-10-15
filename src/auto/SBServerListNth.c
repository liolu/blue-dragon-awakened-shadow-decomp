#include "m2c.h"

s32 *ArrayNth(s32);                            /* extern */

s32 SBServerListNth(void *arg0) {
    return *ArrayNth(M2C_FIELD(arg0, s32 *, 4));
}
