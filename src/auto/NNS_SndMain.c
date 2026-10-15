#include "m2c.h"

s32 SND_RecvCommandReply(M2C_UNK);                         /* extern */
M2C_UNK SND_FlushCommand(M2C_UNK);                     /* extern */
M2C_UNK NNSi_SndPlayerMain();                            /* extern */
M2C_UNK NNSi_SndCaptureMain();                            /* extern */
M2C_UNK NNSi_SndArcStrmMain();                            /* extern */

void NNS_SndMain(void) {
    do {

    } while (SND_RecvCommandReply(0) != 0);
    NNSi_SndPlayerMain();
    NNSi_SndCaptureMain();
    NNSi_SndArcStrmMain();
    SND_FlushCommand(0);
}
