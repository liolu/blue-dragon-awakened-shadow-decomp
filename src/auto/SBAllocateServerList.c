#include "m2c.h"

s32 ArrayNew(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void SBAllocateServerList(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)     = ArrayNew(4, 0x64, 0);
    M2C_FIELD(arg0, s32 *, 0x7D8) = 0;
}
