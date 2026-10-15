#include "m2c.h"

M2C_UNK func_02002fa8();                            /* extern */
M2C_UNK func_0200302c();                            /* extern */
M2C_UNK GX_DispOff();                            /* extern */
M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK OS_EnableIrqMask(M2C_UNK);                     /* extern */
M2C_UNK OS_InitThread();                            /* extern */
M2C_UNK OS_Init();                            /* extern */
M2C_UNK OS_InitTick();                            /* extern */
M2C_UNK OS_InitAlarm();                            /* extern */
M2C_UNK OS_EnableInterrupts(M2C_UNK, u16);                /* extern */
M2C_UNK SND_Init();                            /* extern */
M2C_UNK FS_Init(M2C_UNK);                     /* extern */
M2C_UNK RTC_Init();                            /* extern */
extern M2C_UNK data_02110430;
extern M2C_UNK func_0207dab8;

void func_0207d934(void) {
    u16 temp_r1;

    M2C_FIELD(&data_02110430, s8 *, 1) = 0;
    OS_Init();
    OS_InitThread();
    OS_InitTick();
    OS_InitAlarm();
    RTC_Init();
    FS_Init(1);
    func_02002fa8();
    func_0200302c();
    GX_DispOff();
    *(s32 *) 0x04001000 &= ~0x10000;
    OS_SetIrqFunction(1, &func_0207dab8);
    OS_EnableIrqMask(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    OS_EnableInterrupts(1, temp_r1);
    SND_Init();
}
