#include "m2c.h"

M2C_UNK NNS_FndInitList(s32, M2C_UNK);                /* extern */
s32 NewSection(s32 *);                           /* extern */

s32 InitHeap(s32 *arg0, s32 arg1) {
    NNS_FndInitList(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (NewSection(arg0) != 0) {
        return 1;
    }
    return 0;
}
