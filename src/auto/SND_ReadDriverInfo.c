#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void SND_ReadDriverInfo(M2C_UNK arg0) {
    PushCommand_impl(0x21, arg0, 0, 0, 0);
}
