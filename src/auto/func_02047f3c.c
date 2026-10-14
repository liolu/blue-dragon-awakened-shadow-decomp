#include "m2c.h"

s32 func_02047e94();                                /* extern */

s32 func_02047f3c(void) {
    if ((func_02047e94() & 0x20) == 0x20) {
        return 1;
    }
    return 0;
}
