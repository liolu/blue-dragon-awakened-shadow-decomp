#include "m2c.h"

s32 NNSi_SndArcLoadGroup();                                /* extern */

s32 NNS_SndArcLoadGroup(void) {
    if (NNSi_SndArcLoadGroup() == 0) {
        return 1;
    }
    return 0;
}
