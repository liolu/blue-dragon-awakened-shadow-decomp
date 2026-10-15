#include "m2c.h"

s16 OS_GetLockID();                                /* extern */
M2C_UNK OS_Terminate();                            /* extern */
M2C_UNK CARD_Init();                            /* extern */

void func_02092f30(void *arg0) {
    s16 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xC6) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC6) = 1U;
    CARD_Init();
    temp_r0 = OS_GetLockID();
    if (temp_r0 == -3) {
        OS_Terminate();
    }
    M2C_FIELD(arg0, s16 *, 0xC4) = temp_r0;
}
