#include "m2c.h"

M2C_UNK TableRemove(s32, s32);                    /* extern */
s32 gpiGetProfile(void **, M2C_UNK, s32 *);         /* extern */

void gpiRemoveProfileByID(void **arg0, M2C_UNK arg1) {
    s32 sp0;
    void *temp_r4;

    temp_r4 = *arg0;
    if (gpiGetProfile(arg0, arg1, &sp0) == 0) {
        return;
    }
    TableRemove(M2C_FIELD(temp_r4, s32 *, 0x5C8), sp0);
}
