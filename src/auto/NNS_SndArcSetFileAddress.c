#include "m2c.h"

extern void *sCurrent;

void NNS_SndArcSetFileAddress(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(sCurrent, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
