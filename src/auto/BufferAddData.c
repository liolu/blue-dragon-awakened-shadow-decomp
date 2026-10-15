#include "m2c.h"

M2C_UNK memcpy(s32);                         /* extern */

void BufferAddData(s32 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    memcpy(*arg0);
    *arg3 += arg2;
    *arg0 += arg2;
}
