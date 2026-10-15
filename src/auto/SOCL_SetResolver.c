#include "m2c.h"

s32 SOCL_GetHostID();                                /* extern */
extern M2C_UNK CPSDnsIp;

s32 SOCL_SetResolver(s32 arg0, s32 arg1) {
    if (SOCL_GetHostID() == 0) {
        return -0x27;
    }
    M2C_FIELD(&CPSDnsIp, s32 *, 0) = arg0;
    M2C_FIELD(&CPSDnsIp, s32 *, 4) = arg1;
    return 0;
}
