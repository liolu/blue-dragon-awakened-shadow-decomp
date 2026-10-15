#include "m2c.h"

s32 FIFORemove();                    /* extern */

void SBQueryEngineRemoveServerFromFIFOs(s32 arg0, M2C_UNK arg1) {
    if (FIFORemove(arg0 + 8) != 0) {
        return;
    }
    FIFORemove(arg0 + 0x14, arg1);
}
