#include "m2c.h"

M2C_UNK SND_SetMasterVolume();                            /* extern */

void NNS_SndSetMasterVolume(void) {
    SND_SetMasterVolume();
}
