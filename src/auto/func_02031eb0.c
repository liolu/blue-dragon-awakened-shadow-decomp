#include "m2c.h"

s32 func_0200ab50(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s8 data_021089c0;
extern M2C_UNK data_02108a00;

s32 func_02031eb0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if ((s32) data_021089c0 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = (data_021089c0 * 0x11E0) + (s32) &data_02108a00;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return func_0200ab50(var_r0, arg0, arg1);
}
