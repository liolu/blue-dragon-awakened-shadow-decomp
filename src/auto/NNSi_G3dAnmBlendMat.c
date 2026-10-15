#include "m2c.h"

s32 NNSi_G3dAnmBlendMat(M2C_UNK arg0, void *arg1, u32 arg2) {
    M2C_UNK (*temp_r3)(M2C_UNK, void *, u8);
    s32 var_r0;
    u16 temp_r2;
    void *var_r5;

    var_r5 = arg1;
    var_r0 = 0;
    if (var_r5 == NULL) {
        return 0;
    }
    do {
        if (arg2 < (u32) M2C_FIELD(var_r5, u8 *, 0x19)) {
            temp_r2 = M2C_FIELD((var_r5 + (arg2 * 2)), u16 *, 0x1A);
            if ((temp_r2 & 0x300) == 0x100) {
                temp_r3 = M2C_FIELD(var_r5, M2C_UNK(**)(M2C_UNK, void *, u8), 0xC);
                if (temp_r3 != NULL) {
                    temp_r3(arg0, var_r5, (u8) temp_r2);
                    var_r0 = 1;
                }
            }
        }
        var_r5 = M2C_FIELD(var_r5, void **, 0x10);
    } while (var_r5 != NULL);
    return var_r0;
}
