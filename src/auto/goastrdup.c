#include "m2c.h"

s32 strlen();                                /* extern */
M2C_UNK strcpy(s32, s32);                    /* extern */
s32 gsimalloc(s32);                             /* extern */

s32 goastrdup(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return 0;
    }
    temp_r0 = gsimalloc(strlen() + 1);
    if (temp_r0 != 0) {
        strcpy(temp_r0, arg0);
    }
    return temp_r0;
}
