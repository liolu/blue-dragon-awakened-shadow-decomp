#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, s32 *, M2C_UNK);     /* extern */
s32 DWC_BACKUPlCheckAddress();                                /* extern */

s32 DWC_BACKUPlCheckIp(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    if (DWC_BACKUPlCheckAddress() == 0) {
        return 0;
    }
    MI_CpuCopy8(arg0, &sp4, 4);
    MI_CpuCopy8(arg1, &sp0, 4);
    if (sp4 & ~sp0) {
        return 1;
    }
    return 0;
}
