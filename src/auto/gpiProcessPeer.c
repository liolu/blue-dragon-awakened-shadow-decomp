#include "m2c.h"

s32 gpiProcessPeerInitiatingConnection();                                /* extern */
s32 gpiProcessPeerAcceptingConnection();                                /* extern */
s32 gpiProcessPeerConnected(M2C_UNK, void *);                 /* extern */
M2C_UNK gpiCheckTimedOutPeerOperations(M2C_UNK, void *);             /* extern */

s32 gpiProcessPeer(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;
    s32 var_r4;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    var_r4  = 0;
    if (temp_r2 == 0x64) {
        return 3;
    }
    if (temp_r2 != 0x69) {
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            var_r4 = gpiProcessPeerInitiatingConnection(arg0, arg1);
        } else {
            var_r4 = gpiProcessPeerAcceptingConnection(arg0, arg1);
        }
    }
    if ((var_r4 == 0) && (M2C_FIELD(arg1, s32 *, 0) == 0x69)) {
        var_r4 = gpiProcessPeerConnected(arg0, arg1);
        gpiCheckTimedOutPeerOperations(arg0, arg1);
    }
    return var_r4;
}
