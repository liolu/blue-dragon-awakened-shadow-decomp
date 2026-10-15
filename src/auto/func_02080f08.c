#include "m2c.h"

M2C_UNK NNS_SndHeapDestroy(s32);                         /* extern */
M2C_UNK func_02081ac0(void *);                      /* extern */

void *func_02080f08(void *arg0) {
    NNS_SndHeapDestroy(M2C_FIELD(arg0, s32 *, 0x998));
    NNS_SndHeapDestroy(M2C_FIELD(arg0, s32 *, 0x994));
    func_02081ac0(arg0 + 0x710);
    return arg0;
}
