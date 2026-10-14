#include "m2c.h"

s32 func_02027da0(s32, u16);                        /* extern */
M2C_UNK func_02027df0(s32, M2C_UNK);                /* extern */
s32 func_02033ddc(void *);                          /* extern */

s32 func_02033c78(void *arg0) {
    if (func_02027da0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02033ddc(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02027df0(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
