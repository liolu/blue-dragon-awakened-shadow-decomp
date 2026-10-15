#include "m2c.h"

M2C_UNK NNS_FndRemoveListObject(s32, void *);                 /* extern */
void *NNS_FndGetNextListObject(s32, M2C_UNK);                  /* extern */
M2C_UNK NNS_SndHeapClear(s32);                         /* extern */
extern M2C_UNK sPlayer;

s32 NNSi_SndPlayerAllocHeap(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &sPlayer;
    temp_r0 = NNS_FndGetNextListObject(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    NNS_FndRemoveListObject(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    NNS_SndHeapClear(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
