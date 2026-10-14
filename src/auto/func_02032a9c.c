#include "m2c.h"

M2C_UNK func_02032b24();                            /* extern */

void func_02032a9c(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02032b24(arg0);
}
