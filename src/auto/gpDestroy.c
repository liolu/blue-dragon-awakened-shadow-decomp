#include "m2c.h"

M2C_UNK gpiDestroy();                            /* extern */

void gpDestroy(s32 *arg0) {
    if ((arg0 != NULL) && (*arg0 != 0)) {
        gpiDestroy(arg0);
    }
}
