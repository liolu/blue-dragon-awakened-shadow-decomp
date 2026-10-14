#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_020b3a3c();                            /* extern */
M2C_UNK func_ov000_021bccdc(s32);                   /* extern */

s32 func_020b37c0(s32 arg0) {
    func_020b3a3c();
    func_02077f50(arg0 + 0x1CC);
    func_ov000_021bccdc(arg0);
    return arg0;
}
