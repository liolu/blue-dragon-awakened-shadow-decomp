#include "m2c.h"

void *gsimalloc(s32);                           /* extern */

void *ArrayNew(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r6;
    void *temp_r4;
    void *var_r0;

    var_r6  = arg1;
    temp_r4 = gsimalloc(0x18);
    if (var_r6 == 0) {
        var_r6 = 8;
    }
    var_r0                          = NULL;
    M2C_FIELD(temp_r4, s32 *, 0)    = 0;
    M2C_FIELD(temp_r4, s32 *, 4)    = var_r6;
    M2C_FIELD(temp_r4, s32 *, 8)    = arg0;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = var_r6;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg2;
    temp_r1                         = M2C_FIELD(temp_r4, s32 *, 4);
    if (temp_r1 != 0) {
        var_r0 = gsimalloc(temp_r1 * M2C_FIELD(temp_r4, s32 *, 8));
    }
    M2C_FIELD(temp_r4, void **, 0x14) = var_r0;
    return temp_r4;
}
