#include "m2c.h"

M2C_UNK DWC_ReportFriendData(s32, s32);                    /* extern */

void DWC_ReportUserData(s32 arg0) {
    DWC_ReportFriendData(arg0, arg0 + 4);
    DWC_ReportFriendData(arg0, arg0 + 0x10);
}
