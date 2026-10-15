#include "m2c.h"

M2C_UNK SND_PauseSeq(u8);                          /* extern */

void NNSi_SndPlayerPause(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        SND_PauseSeq(M2C_FIELD(arg0, u8 *, 0x3C));
        M2C_FIELD(arg0, u8 *, 0x2E) = arg1;
    }
}
