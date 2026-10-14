#include "m2c.h"
#include "engine.h"

M2C_UNK func_0207ae84(M2C_UNK);
void func_0207c32c(M2C_UNK, M2C_UNK);

void func_0207bde0(s32 arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x10C) == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x38);
        if ((var_r1 == 0) || (M2C_FIELD(arg0, s32 *, 0x110) != M2C_FIELD(arg0, s32 *, 0x40))) {
            var_r1 = func_0207ae84(M2C_FIELD(arg0, s32 *, 0x110));
            M2C_FIELD(arg0, s32 *, 0x38) = var_r1;
        }
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
    } else {
        var_r1 = func_0207ae84(M2C_FIELD(arg0, s32 *, 0x110));
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
        M2C_FIELD(arg0, s32 *, 0x3C) = var_r1;
    }
    func_0207c32c(arg0, var_r1);
}
