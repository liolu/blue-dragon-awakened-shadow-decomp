#include "m2c.h"

M2C_UNK SNDi_SetTrackParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void SND_SetTrackPitch(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    SNDi_SetTrackParam(arg0, arg1, 0xC, arg2, 2);
}
