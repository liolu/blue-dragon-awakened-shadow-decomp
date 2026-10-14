#include "m2c.h"

s32 func_02035528();                                /* extern */
s32 func_020359f4();                                /* extern */

s32 func_02036cec(void) {
    if (func_02035528() == 0) {
        return 1;
    }
    return func_020359f4();
}
