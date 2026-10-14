#include "m2c.h"

s32 func_020d31d8();                                /* extern */
extern s32 data_021671e8;
extern s32 data_02167224;

s32 func_020d375c(void) {
    if (data_02167224 == 0) {
        return 0;
    }
    if (data_021671e8 == 0) {
        return 0;
    }
    return func_020d31d8();
}
