#include "m2c.h"

s32 strlen(M2C_UNK);                         /* extern */
M2C_UNK func_020615e0(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void gpiAppendStringToBuffer(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020615e0(arg0, arg1, arg2, strlen(arg2));
}
