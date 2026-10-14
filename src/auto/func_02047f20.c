#include "m2c.h"

s32 func_02047e94();                                /* extern */

s32 func_02047f20(void) {
    if ((func_02047e94() & 8) == 8) {
        return 1;
    }
    return 0;
}
