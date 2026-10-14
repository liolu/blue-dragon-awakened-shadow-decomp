#include "m2c.h"

s32 func_0201a3dc(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0201a44c(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0201bd3c(M2C_UNK *);                       /* extern */
M2C_UNK func_02061e38(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
s32 func_0206aaa4(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020fbac4;
extern M2C_UNK data_020fbacc;
extern M2C_UNK data_020fbad4;
extern M2C_UNK data_020fbae0;

s32 func_0206a9cc(M2C_UNK **arg0, M2C_UNK arg1, s32 arg2) {
    u8 sp0[16];
    M2C_UNK *temp_r4;
    M2C_UNK var_r2;
    s32 var_r0;

    temp_r4 = *arg0;
    if (func_0201a3dc(arg1, &data_020fbac4, 7) == 0) {
        if (func_0206aaa4(arg1, &data_020fbacc, sp0, 0x10) != 0) {
            M2C_FIELD(temp_r4, s32 *, 0x5B8) = func_0201bd3c(sp0);
        }
        if (func_0206aaa4(arg1, &data_020fbad4, temp_r4, 0x100) == 0) {
            M2C_FIELD(temp_r4, s8 *, 0) = 0;
        }
        if (arg2 != 0) {
            if (func_0201a44c(arg1, &data_020fbae0) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
            func_02061e38(arg0, 4, var_r2);
        }
        return 1;
    }
    return 0;
}
