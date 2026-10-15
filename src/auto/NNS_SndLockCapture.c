#include "m2c.h"

extern s32 sCaptureLock;

s32 NNS_SndLockCapture(s32 arg0) {
    if (arg0 & sCaptureLock) {
        return 0;
    }
    sCaptureLock |= arg0;
    return 1;
}
