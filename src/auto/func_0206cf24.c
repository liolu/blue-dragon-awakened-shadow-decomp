#include "m2c.h"
#include "engine.h"

M2C_UNK func_0206ef24(M2C_UNK);

s32 func_0206cf24(s32 arg0, s32 arg1) {
    if (((u32) (arg1 - M2C_FIELD(arg0, s32 *, 0x88)) > 0x7530U) && (func_0206ef24(arg0) == 0)) {
        return 0;
    }
    return 1;
}
