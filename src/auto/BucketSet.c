#include "m2c.h"

s32 DoSet(void *, M2C_UNK);                 /* extern */
void *DoFind();                              /* extern */

s32 BucketSet(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = DoFind();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    return DoSet(temp_r0, arg2);
}
