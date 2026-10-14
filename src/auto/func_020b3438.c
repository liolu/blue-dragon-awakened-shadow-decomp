#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_020b36d0();                            /* extern */
M2C_UNK func_ov000_021bccdc(s32);                   /* extern */

s32 func_020b3438(s32 arg0) {
    func_020b36d0();
    func_02077f50(arg0 + 0x140);
    func_ov000_021bccdc(arg0);
    return arg0;
}
