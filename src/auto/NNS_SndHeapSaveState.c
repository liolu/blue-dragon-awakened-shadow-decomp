#include "m2c.h"

s32 NNS_FndRecordStateForFrmHeap(s32, u16);                        /* extern */
M2C_UNK NNS_FndFreeByStateToFrmHeap(s32, M2C_UNK);                /* extern */
s32 NewSection(void *);                          /* extern */

s32 NNS_SndHeapSaveState(void *arg0) {
    if (NNS_FndRecordStateForFrmHeap(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (NewSection(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    NNS_FndFreeByStateToFrmHeap(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
