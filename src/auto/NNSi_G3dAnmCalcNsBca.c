#include "m2c.h"

M2C_UNK getJntSRTAnmResult_(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void NNSi_G3dAnmCalcNsBca(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    s32 var_ip;
    u16 temp_r1;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg1, void **, 8);
    var_ip  = M2C_FIELD(arg1, s32 *, 0);
    temp_r1 = M2C_FIELD(temp_r0, u16 *, 4);
    if (var_ip >= (s32) (temp_r1 << 0xC)) {
        var_ip = (temp_r1 << 0xC) - 1;
    } else if (var_ip < 0) {
        var_ip = 0;
    }
    getJntSRTAnmResult_(temp_r0, arg2, var_ip, arg0);
}
