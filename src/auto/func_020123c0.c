#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020125cc();                                /* extern */
s32 func_02012630(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02012a70();                            /* extern */
extern M2C_UNK data_02104360;

s32 func_020123c0(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    if (func_020125cc() != 0) {
        func_02008af4(temp_r4);
        return 3;
    }
    temp_r0 = func_02012630(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02012a70();
    func_0200b20c(0xA, 0);
    M2C_FIELD(&data_02104360, s32 *, 4) = 0;
    M2C_FIELD(&data_02104360, s16 *, 0) = 0;
    func_02008af4(temp_r4);
    return 0;
}
