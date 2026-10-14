#include "m2c.h"

M2C_UNK func_020979e8();                            /* extern */
M2C_UNK func_0209dc84(s32, M2C_UNK);                /* extern */

s32 func_0208866c(s32 *arg0) {
    if (*arg0 != 0) {
        func_020979e8();
        func_0209dc84(*arg0, 1);
    }
    return 0;
}
