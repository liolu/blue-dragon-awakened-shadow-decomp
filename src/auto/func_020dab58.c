#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_ov000_021c0f44(s32);                   /* extern */
extern M2C_UNK func_ov000_021c0f30;

s32 func_020dab58(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0xA8;
    var_r4 = 0;
    do {
        func_ov000_021c0f44(var_r5);
        var_r4 += 1;
        var_r5 += 0x58;
    } while (var_r4 < 3);
    func_02026e14(arg0 + 0xA8, 3, 0x58, &func_ov000_021c0f30);
    func_02077f50(arg0);
    return arg0;
}
