#include "m2c.h"

M2C_UNK func_0207c42c(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0207c638(M2C_UNK *, s32 *);                /* extern */
s32 func_0207c804(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0207e29c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020fd798;
extern M2C_UNK data_02110134;

s32 func_02089cd0(void) {
    s32 sp0;
    s32 temp_r0;

    if ((func_0207c638(&data_02110134, &sp0) == 1) && (sp0 == 7)) {
        return func_0207c804(&data_02110134, 7);
    }
    temp_r0 = func_0207e29c(&data_020fd798);
    if (temp_r0 != 0) {
        func_0207c42c(&data_02110134, temp_r0, 1);
    }
    return 1;
}
