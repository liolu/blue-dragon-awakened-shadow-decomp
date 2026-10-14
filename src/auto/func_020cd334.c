#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c5620(M2C_UNK);
void func_020cb8f4(M2C_UNK);

void func_020cd334(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x130) != 0xB) {
        return;
    }
    if (func_020c5620(arg0) == 0) {
        return;
    }
    func_020cb8f4(arg0);
}
