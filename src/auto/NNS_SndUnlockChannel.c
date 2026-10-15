#include "m2c.h"

M2C_UNK SND_UnlockChannel(s32, M2C_UNK);                /* extern */
extern M2C_UNK sCaptureLock;

void NNS_SndUnlockChannel(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    SND_UnlockChannel(arg0, 0);
    M2C_FIELD(&sCaptureLock, s32 *, 8) = (s32) (M2C_FIELD(&sCaptureLock, s32 *, 8) & ~arg0);
}
