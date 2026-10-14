#include "m2c.h"

s32 func_0204e598();                                /* extern */
extern void *data_0210e738;

s32 func_0204e314(s32 arg0) {
    if (data_0210e738 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(data_0210e738, s32 *, 0x668) & (1 << arg0))) {
        return 0;
    }
    return func_0204e598();
}
