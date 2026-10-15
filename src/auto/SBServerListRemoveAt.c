#include "m2c.h"

s32 *ArrayNth(s32);                            /* extern */
M2C_UNK ArrayDeleteAt(s32, M2C_UNK);                /* extern */
M2C_UNK AddServerToDeadlist(void *, s32);                 /* extern */

void SBServerListRemoveAt(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = *ArrayNth(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 2, temp_r4, M2C_FIELD(arg0, s32 *, 0x494));
    ArrayDeleteAt(M2C_FIELD(arg0, s32 *, 4), arg1);
    AddServerToDeadlist(arg0, temp_r4);
}
