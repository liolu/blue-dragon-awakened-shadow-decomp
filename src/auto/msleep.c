#include "m2c.h"

M2C_UNK OS_Sleep();                            /* extern */

void msleep(void) {
    OS_Sleep();
}
