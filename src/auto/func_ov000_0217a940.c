#include "m2c.h"

s32 NNS_GfdRegisterNewVramTransferTask();                                /* extern */

s32 func_ov000_0217a940(void) {
    if (NNS_GfdRegisterNewVramTransferTask() != 0) {
        return 1;
    }
    return 0;
}
