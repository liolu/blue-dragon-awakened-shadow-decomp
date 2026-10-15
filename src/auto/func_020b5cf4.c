#include "m2c.h"

s32 func_020bf2cc(void *);                          /* extern */
s32 func_020bf738(void *);                          /* extern */
s32 func_020c0f14(void *);                          /* extern */

s32 func_020b5cf4(s32 arg0, void *arg1) {
    if ((arg1 == NULL) || (func_020bf738(arg1) == 0) || (M2C_FIELD(arg1, u8 *, 0x74) & 0x20) || (func_020c0f14(arg1) != 0) ||
        (func_020bf2cc(arg1) != 0)) {
        return 0;
    }
    return 1;
}
