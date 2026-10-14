#include "m2c.h"

M2C_UNK func_02078404(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov000_021c0f74(void *, s32);           /* extern */
extern M2C_UNK data_021016cc;

void func_020daba8(void *arg0) {
    s32 temp_r2;
    s32 var_r4;
    s32 var_r5;
    void *var_r6;

    func_02078404(arg0, &data_021016cc, 0, 0, 0x10, 0);
    var_r4 = 0;
    var_r5 = 0;
    var_r6 = arg0 + 0xA8;
    do {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
        func_ov000_021c0f74(var_r6, temp_r2 + M2C_FIELD((temp_r2 + var_r5), s32 *, 4));
        var_r4 += 1;
        var_r5 += 4;
        var_r6 += 0x58;
    } while (var_r4 < 3);
}
