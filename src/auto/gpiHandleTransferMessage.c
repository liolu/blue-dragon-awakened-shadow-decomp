#include "m2c.h"

s32 STD_TSScanf(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK gpiSendTransferReply(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 gpiValueForKey(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020fba60;
extern M2C_UNK data_020fba68;

void gpiHandleTransferMessage(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp10[64];
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK sp4;

    if (gpiValueForKey(arg3, &data_020fba60, sp10, 0x40) == 0) {
        return;
    }
    if (STD_TSScanf(sp10, &data_020fba68, &sp4, &sp8, &spC) != 3) {
        return;
    }
    gpiSendTransferReply(arg0, &sp4, arg1, 2, 0);
}
