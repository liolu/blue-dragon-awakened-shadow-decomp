#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c0f14(M2C_UNK);
void func_ov000_0218b5ac(M2C_UNK, M2C_UNK);

void func_020bfbb8(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x78) & 0x1000) {
        return;
    }
    if (func_020c0f14(arg0) != 0) {
        return;
    }
    temp_r0   = M2C_FIELD(arg0, void ***, 0xC);
    temp_r0_2 = M2C_FIELD(*temp_r0, s32(**)(void **, M2C_UNK), 0x50)(temp_r0, 2);
    if (temp_r0_2 == 0) {
        return;
    }
    func_ov000_0218b5ac(temp_r0_2, arg1);
}
