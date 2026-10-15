#include "m2c.h"

M2C_UNK gsifree(s32);                         /* extern */
M2C_UNK SBEngineCleanup(s32);                         /* extern */
M2C_UNK SBServerListCleanup(s32);                         /* extern */

void func_020750b4(s32 arg0) {
    SBServerListCleanup(arg0 + 0x4C);
    SBEngineCleanup(arg0);
    gsifree(arg0);
}
