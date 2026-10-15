#include "engine.h"
#include "m2c.h"

M2C_UNK SOCLi_RoundUp4(M2C_UNK);

s32 SOCLi_GetSizeCommandPipe(s32 arg0) {
    s32 temp_r4;

    temp_r4 = SOCLi_RoundUp4(M2C_FIELD(arg0, u8 *, 3) * 4);
    return temp_r4 + SOCLi_RoundUp4((s32) M2C_FIELD(arg0, u16 *, 0));
}
