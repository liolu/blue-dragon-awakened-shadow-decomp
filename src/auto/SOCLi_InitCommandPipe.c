#include "m2c.h"

M2C_UNK OS_CreateThread(s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK OS_WakeupThreadDirect(s32);                         /* extern */
M2C_UNK OS_InitMessageQueue(s32, s32, u8);                /* extern */
M2C_UNK OS_InitMutex(s32);                         /* extern */
s32 SOCLi_GetSizeCommandPipe(void *);                          /* extern */
extern M2C_UNK SOCLi_CommandPacketHandler;

s32 SOCLi_InitCommandPipe(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4 = SOCLi_GetSizeCommandPipe(arg2);
    OS_InitMessageQueue(arg1, arg0, M2C_FIELD(arg2, u8 *, 3));
    OS_InitMutex(arg1 + 0xE0);
    OS_CreateThread(arg1 + 0x20, &SOCLi_CommandPacketHandler, arg1, arg0 + temp_r4, (s32) M2C_FIELD(arg2, u16 *, 0),
                    (s32) M2C_FIELD(arg2, u8 *, 2));
    OS_WakeupThreadDirect(arg1 + 0x20);
    return arg0 + temp_r4;
}
