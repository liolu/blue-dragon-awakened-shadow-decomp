#include "m2c.h"

s32 func_020dcbb0(s32);                             /* extern */
extern s32 data_021672b8;

s32 func_020dcd18(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        return 0;
    }
    return func_020dcbb0(data_021672b8);
}
