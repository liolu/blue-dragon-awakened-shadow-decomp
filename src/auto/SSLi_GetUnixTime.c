#include "m2c.h"

M2C_UNK RTC_GetDate(M2C_UNK *);                   /* extern */
M2C_UNK RTC_GetTime(M2C_UNK *);                   /* extern */
s32 RTC_ConvertDateTimeToSecond(M2C_UNK *, M2C_UNK *);            /* extern */

s32 SSLi_GetUnixTime(void) {
    u8 spC[16];
    u8 sp0[12];

    RTC_GetDate(spC);
    RTC_GetTime(sp0);
    return RTC_ConvertDateTimeToSecond(spC, sp0) + 0x386D4380;
}
