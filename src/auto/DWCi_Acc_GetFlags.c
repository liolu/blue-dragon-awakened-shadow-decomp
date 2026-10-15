#include "m2c.h"

s32 DWCi_Acc_GetFlags(u32 *arg0) {
    return 0x1FFFFF & ((u32) *arg0 >> 0xB);
}
