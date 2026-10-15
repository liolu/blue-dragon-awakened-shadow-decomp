#include "m2c.h"

s32 func_0204fa58();                                /* extern */
s32 gpSetStatusA(void **, s32, s32, s32);          /* extern */
extern M2C_UNK data_0210e8cc;

s32 func_020503c0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg0;
    var_r5 = arg1;
    var_r4 = arg2;
    if ((M2C_FIELD(&data_0210e8cc, void **, 0xC) == NULL) || (func_0204fa58() == 0)) {
        return 0;
    }
    if (var_r6 == -1) {
        var_r6 = M2C_FIELD(*M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), void ***, 4), s32 *, 0x23C);
    }
    if (var_r5 == 0) {
        var_r5 = *M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), void ***, 4) + 0x3B8;
    }
    if (var_r4 == 0) {
        var_r4 = *M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), void ***, 4) + 0x4B8;
    }
    return gpSetStatusA(M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), void ***, 4), var_r6, var_r5, var_r4);
}
