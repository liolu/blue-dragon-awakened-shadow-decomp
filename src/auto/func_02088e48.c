#include "m2c.h"

M2C_UNK CTRDG_SetTaskThreadPriority(s32);                         /* extern */

s32 func_02088e48(s32 *arg0) {
    CTRDG_SetTaskThreadPriority(*arg0);
    return 0;
}
