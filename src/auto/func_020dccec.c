#include "m2c.h"

s32 func_020dcb84(s32);                             /* extern */
extern s32 data_021672b8;

s32 func_020dccec(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        return 1;
    }
    return func_020dcb84(data_021672b8);
}
