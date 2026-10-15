#include "m2c.h"

M2C_UNK WCMi_ResetKeepAliveAlarm();                            /* extern */
M2C_UNK WCMi_CpsifSendNullPacket();                            /* extern */

void WcmKeepAliveAlarm(void) {
    WCMi_CpsifSendNullPacket();
    WCMi_ResetKeepAliveAlarm();
}
