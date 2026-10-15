#include "m2c.h"

extern u16 OSi_UseAlarm;

u16 OS_IsAlarmAvailable(void) {
    return OSi_UseAlarm;
}
