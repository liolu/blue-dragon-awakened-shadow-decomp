#include "m2c.h"

extern M2C_UNK rtcInitialized;

void RtcGetResultCallback(s32 arg0) {
    M2C_FIELD(&rtcInitialized, s32 *, 0x2C) = arg0;
}
