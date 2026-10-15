#include "m2c.h"

s32 WCM_GetApMacAddress();                                /* extern */

s32 SOCL_LinkIsOn(void) {
    if (WCM_GetApMacAddress() != 0) {
        return 1;
    }
    return 0;
}
