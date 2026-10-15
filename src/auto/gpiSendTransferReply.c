#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 gpiSendOrBufferString(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
s32 gpiPeerStartTransferMessage(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 gpiPeerFinishTransferMessage(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020fba44;
extern M2C_UNK data_020fba48;

s32 gpiSendTransferReply(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK *arg4) {
    u8 sp0[32];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    if (arg4 == NULL) {
        arg4 = &data_020fba44;
    }
    temp_r0_2 = gpiPeerStartTransferMessage(arg0, arg2, 0xC9, arg1);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_020068c0(sp0, &data_020fba48, 1, arg3);
    temp_r0 = gpiSendOrBufferString(arg0, arg2, sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r0 = gpiPeerFinishTransferMessage(arg0, arg2, arg4, -1);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
