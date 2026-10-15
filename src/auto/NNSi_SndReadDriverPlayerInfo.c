#include "m2c.h"

s32 SND_ReadPlayerInfo(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s8 sCurDriverInfo;
extern M2C_UNK sDriverInfo;

s32 NNSi_SndReadDriverPlayerInfo(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if ((s32) sCurDriverInfo < 0) {
        var_r0 = 0;
    } else {
        var_r0 = (sCurDriverInfo * 0x11E0) + (s32) &sDriverInfo;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return SND_ReadPlayerInfo(var_r0, arg0, arg1);
}
