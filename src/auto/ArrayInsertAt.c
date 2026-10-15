#include "m2c.h"

M2C_UNK memmove(s32, s32, s32);               /* extern */
M2C_UNK ArrayGrow();                            /* extern */
M2C_UNK SetElement(void *, M2C_UNK, s32);        /* extern */
s32 ArrayNth(void *, s32);                     /* extern */

void ArrayInsertAt(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r7;
    s32 temp_r8;

    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg0, s32 *, 4)) {
        ArrayGrow(arg0);
    }
    temp_r0                   = M2C_FIELD(arg0, s32 *, 0) + 1;
    temp_r8                   = temp_r0 - 1;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (arg2 < temp_r8) {
        temp_r7 = ArrayNth(arg0, arg2 + 1);
        memmove(temp_r7, ArrayNth(arg0, arg2), M2C_FIELD(arg0, s32 *, 8) * (temp_r8 - arg2));
    }
    SetElement(arg0, arg1, arg2);
}
