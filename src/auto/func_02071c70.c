#include "m2c.h"

s32 func_0205c600();                                /* extern */
M2C_UNK func_02073234(void *, M2C_UNK);             /* extern */
extern void *data_020fbcdc;

void func_02071c70(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_020fbcdc;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) == 0) {
        return;
    }
    if ((u32) (func_0205c600() - M2C_FIELD(var_r4, s32 *, 0xAC)) < 0x2710U) {
        M2C_FIELD(var_r4, s32 *, 0xB4) = 1;
        return;
    }
    func_02073234(var_r4, 1);
    M2C_FIELD(var_r4, s32 *, 0xB4) = 0;
}
