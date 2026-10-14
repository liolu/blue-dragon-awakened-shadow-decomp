#include "m2c.h"

s16 func_02098664(s32, s32, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_02099264(void *);                          /* extern */
s32 func_02099290();                                /* extern */
extern s32 data_0216581c;
extern M2C_UNK func_02098ab0;

s32 func_020992c8(void *arg0) {
    s32 var_r4;

    var_r4 = func_02099290();
    if (var_r4 < 0) {
        var_r4 = func_02099264(arg0);
        if (var_r4 < 0) {
            return -1;
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0xB4) == -1) {
        M2C_FIELD(arg0, s16 *, 0xB4) = func_02098664(data_0216581c, M2C_FIELD(arg0, s32 *, 0) + 0x10, &func_02098ab0, 6, 2);
    }
    return var_r4;
}
