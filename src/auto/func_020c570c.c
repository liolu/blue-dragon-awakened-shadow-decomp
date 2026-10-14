#include "m2c.h"
#include "engine.h"

M2C_UNK func_02024d70(M2C_UNK, M2C_UNK);
M2C_UNK func_020bcce8(M2C_UNK);

s32 func_020c570c(s32 arg0) {
    s32 temp_r4;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 0xC);
    return (s32) (u8) func_02024d70(temp_r4 * 0x64, func_020bcce8((s32) temp_r0));
}
