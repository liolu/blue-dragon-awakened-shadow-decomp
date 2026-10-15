#include "m2c.h"

void *NNS_SndArcGetSeqInfo(s32);                           /* extern */
s32 StartSeq(M2C_UNK, u8, u16, u8, void *, s32); /* extern */

s32 NNS_SndArcPlayerStartSeq(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = NNS_SndArcGetSeqInfo(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return StartSeq(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                    arg1);
}
