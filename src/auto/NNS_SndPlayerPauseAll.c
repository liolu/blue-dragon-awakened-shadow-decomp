#include "m2c.h"

s32 NNS_FndGetNextListObject(M2C_UNK *, s32);                  /* extern */
M2C_UNK NNSi_SndPlayerPause(s32, M2C_UNK);                /* extern */
extern M2C_UNK sPrioList;

void NNS_SndPlayerPauseAll(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r6;

    var_r6 = NNS_FndGetNextListObject(&sPrioList, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = NNS_FndGetNextListObject(&sPrioList, var_r6);
        NNSi_SndPlayerPause(var_r6, arg0);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
