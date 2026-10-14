#include "m2c.h"

void *func_0205cb20(M2C_UNK);                       /* extern */
M2C_UNK func_0206ad48(void **, M2C_UNK *);          /* extern */
extern M2C_UNK data_020fb4dc;

s32 func_020660b8(void **arg0, s32 arg1, s32 arg2, void **arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r2;
    void *temp_r0;
    void *temp_r4;

    temp_r4 = *arg0;
    temp_r0 = func_0205cb20(0x24);
    if (temp_r0 == NULL) {
        func_0206ad48(arg0, &data_020fb4dc);
        return 1;
    }
    M2C_FIELD(temp_r0, s32 *, 0) = arg1;
    M2C_FIELD(temp_r0, s32 *, 4) = arg2;
    M2C_FIELD(temp_r0, s32 *, 8) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
    if (arg1 == 0) {
        M2C_FIELD(temp_r0, s32 *, 0x18) = 1;
    } else {
        temp_r2 = M2C_FIELD(temp_r4, s32 *, 0x234);
        M2C_FIELD(temp_r4, s32 *, 0x234) = (s32) (temp_r2 + 1);
        M2C_FIELD(temp_r0, s32 *, 0x18) = temp_r2;
        if ((s32) M2C_FIELD(temp_r4, s32 *, 0x234) < 2) {
            M2C_FIELD(temp_r4, s32 *, 0x234) = 2;
        }
    }
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg6;
    M2C_FIELD(temp_r0, void **, 0x20) = (void *) M2C_FIELD(temp_r4, void **, 0x5C4);
    M2C_FIELD(temp_r4, void **, 0x5C4) = temp_r0;
    *arg3 = temp_r0;
    return 0;
}
