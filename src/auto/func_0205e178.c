#include "m2c.h"

M2C_UNK gpiReset(void **);                     /* extern */
M2C_UNK gpiDisconnect(void **, M2C_UNK);            /* extern */

void func_0205e178(void **arg0) {
    void *temp_r1;

    if (arg0 != NULL) {
        temp_r1 = *arg0;
        if (temp_r1 != NULL) {
            if (M2C_FIELD(temp_r1, s32 *, 0x108) != 0) {
                return;
            }
            gpiDisconnect(arg0, 1);
            gpiReset(arg0);
        }
    }
}
