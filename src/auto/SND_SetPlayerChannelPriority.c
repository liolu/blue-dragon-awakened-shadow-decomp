#include "m2c.h"

M2C_UNK SNDi_SetPlayerParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void SND_SetPlayerChannelPriority(M2C_UNK arg0, M2C_UNK arg1) {
    SNDi_SetPlayerParam(arg0, 4, arg1, 1);
}
