#include "m2c.h"

extern M2C_UNK enc;

s32 func_0206b388(void) {
    if (M2C_FIELD(&enc, s32 *, 4) != -1) {
        return 1;
    }
    return 0;
}
