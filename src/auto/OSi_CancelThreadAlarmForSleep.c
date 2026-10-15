#include "m2c.h"

M2C_UNK OS_CancelAlarm();                            /* extern */

void OSi_CancelThreadAlarmForSleep(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
        return;
    }
    OS_CancelAlarm();
}
