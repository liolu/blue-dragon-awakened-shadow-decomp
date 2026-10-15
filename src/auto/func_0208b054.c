#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208a680(M2C_UNK);
M2C_UNK func_0208a76c(void);
void func_020c0884(M2C_UNK, M2C_UNK);

void func_0208b054(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (arg1 == 0) {
        return;
    }
    if ((u16) var_r0 == 0xFFFE) {
        var_r0 = func_0208a76c();
    }
    if ((u16) var_r0 == 0xFFFF) {
        return;
    }
    if ((s32) (var_r0 & 0xF000) >= 0x8000) {
        return;
    }
    if (((s32) (var_r0 & 0xF00) >> 8) == 4) {
        return;
    }
    func_020c0884(func_0208a680(var_r0), arg1);
}
