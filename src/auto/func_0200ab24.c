#include "m2c.h"

M2C_UNK func_02007a2c(void *, M2C_UNK);             /* extern */
extern void *data_021038a0;

s32 func_0200ab24(void) {
    func_02007a2c(data_021038a0 + 4, 4);
    return M2C_FIELD(data_021038a0, s32 *, 4);
}
