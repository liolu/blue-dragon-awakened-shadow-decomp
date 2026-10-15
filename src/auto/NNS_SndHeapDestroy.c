#include "m2c.h"

M2C_UNK NNS_FndDestroyFrmHeap(s32);                         /* extern */
M2C_UNK NNS_SndHeapClear();                            /* extern */

void NNS_SndHeapDestroy(s32 *arg0) {
    NNS_SndHeapClear();
    NNS_FndDestroyFrmHeap(*arg0);
}
