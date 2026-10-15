#include "m2c.h"

M2C_UNK ForceStopStrm();                            /* extern */

void NNS_SndStrmStop(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    ForceStopStrm(arg0);
}
