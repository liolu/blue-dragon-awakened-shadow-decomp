#include "m2c.h"

M2C_UNK SOCL_WriteTo(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void SOC_Send(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    SOCL_WriteTo(arg0, arg1, arg2, 0, 0, arg3);
}
