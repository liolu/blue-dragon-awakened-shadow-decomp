#include "m2c.h"

M2C_UNK func_0208b6a4(s32, s32 *, s32 *, s32);      /* extern */
s32 func_0208c3f8(s16);                             /* extern */

s32 func_0208f044(void *arg0) {
    s32 sp4;
    s32 sp0;
    s32 *temp_r1;
    s32 *temp_r1_2;
    s32 temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        func_0208b6a4(temp_r0 + 0x28, &sp4, &sp0, M2C_FIELD(arg0, s32 *, 0xC));
        temp_r1 = M2C_FIELD(arg0, s32 **, 4);
        if (temp_r1 != NULL) {
            *temp_r1 = sp4;
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 **, 8);
        if (temp_r1_2 != NULL) {
            *temp_r1_2 = sp0;
        }
    }
    return 0;
}
