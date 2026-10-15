#include "m2c.h"

s32 DWCi_Acc_GetFlags();                                /* extern */

s32 DWCi_Acc_GetFlag_DataType(void) {
    return DWCi_Acc_GetFlags() & 3;
}
