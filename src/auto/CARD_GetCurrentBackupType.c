#include "m2c.h"

extern void *cardi_common;

s32 CARD_GetCurrentBackupType(void) {
    return M2C_FIELD(cardi_common, s32 *, 4);
}
