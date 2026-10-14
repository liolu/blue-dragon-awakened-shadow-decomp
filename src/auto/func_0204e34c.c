#include "m2c.h"

extern void *data_0210e738;

s32 func_0204e34c(void) {
    if (data_0210e738 != NULL) {
        return M2C_FIELD(data_0210e738, s32 *, 0x24);
    }
    return 0;
}
