#include "m2c.h"

s32 func_0204e290(s32 *);                           /* extern */
s32 func_0204e67c(s32, s32);                        /* extern */
extern s32 data_0210e738;

s32 func_0204e2e0(void) {
    s32 sp0;

    if (data_0210e738 == 0) {
        return 0;
    }
    return func_0204e67c(sp0, func_0204e290(&sp0));
}
