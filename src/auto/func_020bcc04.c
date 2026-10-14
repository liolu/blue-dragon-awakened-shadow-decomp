#include "m2c.h"

void func_020bcc04(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x20)(arg0, M2C_FIELD(arg0, s32 *, 0xC) + arg1);
}
