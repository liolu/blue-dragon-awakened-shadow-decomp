#include "m2c.h"

M2C_UNK OS_JoinThread(s32);                         /* extern */
M2C_UNK OS_RescheduleThread();                            /* extern */
M2C_UNK OS_DisableScheduler();                            /* extern */
M2C_UNK OS_EnableScheduler();                            /* extern */
M2C_UNK OS_SendMessage(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 OS_ReceiveMessage(s32, void **, M2C_UNK);           /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK SOCLi_FreeCommandPacket(void *);                      /* extern */

void SOCLi_FreeCommandPipe(s32 arg0) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r8;

    if (arg0 == 0) {
        return;
    }
    OS_JoinThread(arg0 + 0x20);
    temp_r8 = OS_DisableInterrupts();
    OS_DisableScheduler();
    if (OS_ReceiveMessage(arg0, &sp0, 0) != 0) {
        do {
            if (sp0 != NULL) {
                temp_r0 = M2C_FIELD(sp0, s32 *, 8);
                if (temp_r0 != 0) {
                    OS_SendMessage(temp_r0, -0xB, 0);
                }
                SOCLi_FreeCommandPacket(sp0);
            }
        } while (OS_ReceiveMessage(arg0, &sp0, 0) != 0);
    }
    OS_EnableScheduler();
    OS_RescheduleThread();
    OS_RestoreInterrupts(temp_r8);
}
