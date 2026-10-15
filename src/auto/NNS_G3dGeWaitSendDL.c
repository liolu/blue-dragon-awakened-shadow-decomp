#include "m2c.h"

extern M2C_UNK NNS_G3dGeBuffer;

void NNS_G3dGeWaitSendDL(void) {
    do {

    } while (M2C_FIELD(&NNS_G3dGeBuffer, volatile s32 *, 4) != 0);
}
