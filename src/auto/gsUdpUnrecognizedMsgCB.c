#include "m2c.h"

void *gsUdpEngineGetEngine();                              /* extern */

s32 gsUdpUnrecognizedMsgCB(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 (*temp_lr)(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
    s32 var_r0;
    void *temp_r0;

    temp_r0 = gsUdpEngineGetEngine();
    temp_lr = M2C_FIELD(temp_r0, s32(**)(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32), 0x28);
    if (temp_lr != NULL) {
        if (temp_lr(arg1, arg2, arg3, arg4, M2C_FIELD(temp_r0, s32 *, 0x2C)) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
