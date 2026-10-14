#include "m2c.h"

M2C_UNK func_02027244(s32, M2C_UNK);                /* extern */
s32 func_02033ddc(s32 *);                           /* extern */

s32 func_02033da8(s32 *arg0, s32 arg1) {
    func_02027244(((s8 *)arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02033ddc(arg0) != 0) {
        return 1;
    }
    return 0;
}
