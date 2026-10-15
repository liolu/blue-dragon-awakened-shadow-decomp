#include "m2c.h"

M2C_UNK TableFree(s32);                         /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void SBServerFree(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    TableFree(M2C_FIELD(temp_r4, s32 *, 0x18));
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    gsifree(temp_r4);
}
