#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK SOCLi_CleanupSocket();                            /* extern */
extern s32 SOCLiSocketListTrash;

void SOCLi_TrashSocket(void) {
    s32 temp_r5;

    temp_r5 = OS_DisableInterrupts();
    if (SOCLiSocketListTrash != 0) {
        do {
            SOCLi_CleanupSocket();
        } while (SOCLiSocketListTrash != 0);
    }
    OS_RestoreInterrupts(temp_r5);
}
