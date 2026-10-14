#include "m2c.h"

extern void *data_0210e738;

u8 func_0204e274(void) {
    if (data_0210e738 != NULL) {
        return M2C_FIELD(data_0210e738, u8 *, 0x2C);
    }
    return 0U;
}
