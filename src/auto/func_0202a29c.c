#include "m2c.h"

M2C_UNK func_0202c19c(void *, s32);                 /* extern */

void func_0202a29c(void *arg0, s32 arg1, void *arg2) {
    s32 var_r0;
    u8 var_r6;

    if (M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20) != NULL) {
        var_r6 = M2C_FIELD(arg0, u8 *, 0x91);
    } else {
        var_r6 = 0;
    }
    if (var_r6 == 1) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20)(arg0);
        if (M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20) != NULL) {
            var_r6 = M2C_FIELD(arg0, u8 *, 0x91);
        } else {
            var_r6 = 0;
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 8) & 0x40;
    } else {
        var_r0 = 0;
    }
    if ((var_r0 == 0) && !(M2C_FIELD(arg0, s32 *, 8) & 0x100)) {
        func_0202c19c(arg2 + M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(arg2, s32 *, 0xC));
    }
    if (var_r6 == 2) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20)(arg0);
        if (M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20) != NULL) {
            var_r6 = M2C_FIELD(arg0, u8 *, 0x91);
        } else {
            var_r6 = 0;
        }
    }
    if (var_r6 != 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
    M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x20)(arg0);
}
