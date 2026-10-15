#include "m2c.h"

s32 gsimalloc(s32);                             /* extern */

s32 gti2AllocateBuffer(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0                   = gsimalloc(arg1);
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 1;
}
