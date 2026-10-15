#include "m2c.h"

M2C_UNK TableFree(s32);                         /* extern */
M2C_UNK gsifree(void *);                      /* extern */
M2C_UNK gpiDisconnect(void **, M2C_UNK);            /* extern */
M2C_UNK gpiStatusInfoKeysDestroy(void **);                     /* extern */

void gpiDestroy(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    gpiDisconnect(arg0, 1);
    gpiStatusInfoKeysDestroy(arg0);
    TableFree(M2C_FIELD(temp_r4, s32 *, 0x5C8));
    gsifree(temp_r4);
    *arg0 = NULL;
}
