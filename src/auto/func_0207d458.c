#include "m2c.h"

M2C_UNK OS_LockMutex(M2C_UNK *);                   /* extern */
M2C_UNK OS_UnlockMutex(M2C_UNK *);                   /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
s32 NNS_FndGetAllocatableSizeForExpHeapEx(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_021102d0;

s32 func_0207d458(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    OS_LockMutex(&data_021102d0);
    temp_r5 = OS_DisableInterrupts();
    temp_r4 = NNS_FndGetAllocatableSizeForExpHeapEx(M2C_FIELD(arg0, s32 *, 0x1C), 4);
    OS_UnlockMutex(&data_021102d0);
    OS_RestoreInterrupts(temp_r5);
    return temp_r4;
}
