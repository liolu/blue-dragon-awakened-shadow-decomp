#include "m2c.h"

s32 readNvram(M2C_UNK, M2C_UNK, u16 *);         /* extern */
extern M2C_UNK nv_result;

s32 DWCi_BACKUPlInit(u16 *arg0) {
    if (readNvram(0x20, 0x20, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&nv_result, s32 *, 8) = (s32) ((*arg0 * 8) - 0x400);
    return 1;
}
