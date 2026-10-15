#include "engine.h"
#include "m2c.h"

void ForceStopSeq(M2C_UNK);
void SetPlayerPriority(M2C_UNK, M2C_UNK);
void NNSi_SndFaderSet(M2C_UNK, M2C_UNK, M2C_UNK);

void NNSi_SndPlayerStopSeq(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            ForceStopSeq(arg0);
            return;
        }
        NNSi_SndFaderSet(arg0 + 0x1C, 0, arg1);
        SetPlayerPriority(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
