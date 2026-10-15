#include "m2c.h"

M2C_UNK SND_FlushCommand(M2C_UNK);                     /* extern */
M2C_UNK SND_WaitForCommandProc(s32);                         /* extern */
s32 SND_GetCurrentCommandTag();                                /* extern */

void EraseSync(void) {
    s32 temp_r4;

    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
