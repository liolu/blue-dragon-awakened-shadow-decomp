#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 strlen(M2C_UNK *);                       /* extern */
s32 time(M2C_UNK);                         /* extern */
s32 gpiSendOrBufferChar(M2C_UNK, void *, M2C_UNK);        /* extern */
s32 gpiSendOrBufferStringLenToPeer(M2C_UNK, void *, M2C_UNK *, s32); /* extern */
s32 gpiSendOrBufferString(M2C_UNK, void *, M2C_UNK *);      /* extern */
extern M2C_UNK data_020fb600;
extern M2C_UNK data_020fb604;

s32 gpiPeerFinishTransferMessage(M2C_UNK arg0, void *arg1, M2C_UNK *arg2, s32 arg3) {
    u8 sp0[32];
    M2C_UNK *var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r4;

    var_r5 = arg2;
    var_r4 = arg3;
    if (arg1 == NULL) {
        return 3;
    }
    if (var_r5 == NULL) {
        var_r5 = &data_020fb600;
    }
    if (var_r4 == -1) {
        var_r4 = strlen(var_r5);
    }
    func_020068c0(sp0, &data_020fb604, var_r4);
    temp_r0_3 = gpiSendOrBufferString(arg0, arg1, sp0);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = gpiSendOrBufferStringLenToPeer(arg0, arg1, var_r5, var_r4);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = gpiSendOrBufferChar(arg0, arg1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (time(0) + 0x2710);
    return 0;
}
