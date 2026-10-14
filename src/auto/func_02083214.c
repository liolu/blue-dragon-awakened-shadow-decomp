#include "m2c.h"

M2C_UNK func_02083178(s32, s32, s32);               /* extern */

s32 func_02083214(void *arg0) {
    func_02083178(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
    return 0;
}
