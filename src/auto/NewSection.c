#include "m2c.h"

M2C_UNK NNS_FndAppendListObject(void *, s32);                 /* extern */
s32 NNS_FndAllocFromFrmHeapEx(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK InitHeapSection();                            /* extern */

s32 NewSection(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = NNS_FndAllocFromFrmHeapEx(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    InitHeapSection();
    NNS_FndAppendListObject(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
