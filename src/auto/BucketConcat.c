#include "m2c.h"

s32 strlen();                         /* extern */
M2C_UNK strcpy();                    /* extern */
M2C_UNK strcat();                /* extern */
s32 gsimalloc();                             /* extern */
M2C_UNK gsifree();                         /* extern */
M2C_UNK DoSet();                    /* extern */
s32 DoGet();                             /* extern */
s32 DoFind();                                /* extern */

s32 BucketConcat(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = DoFind();
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r5   = DoGet();
    temp_r4   = strlen();
    temp_r0_2 = gsimalloc(temp_r4 + strlen(arg2) + 1);
    strcpy(temp_r0_2, temp_r5);
    strcat(temp_r0_2, arg2);
    DoSet(temp_r0, temp_r0_2);
    gsifree(temp_r0_2);
    return DoGet(temp_r0);
}
