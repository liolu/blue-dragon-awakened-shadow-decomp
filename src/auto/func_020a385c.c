#include "m2c.h"

M2C_UNK func_0209e204(s32);                         /* extern */
M2C_UNK func_0209e374(s32);                         /* extern */
M2C_UNK func_0209e41c(s32);                         /* extern */
M2C_UNK func_ov000_021d57f8(s32);                   /* extern */

s32 func_020a385c(s32 arg0) {
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r9;
    s32 var_r9_2;

    func_0209e374(arg0 + 0x3200);
    func_0209e374(arg0 + 0x3214);
    var_r6 = 0;
    var_r8 = arg0;
    do {
        var_r7 = 0;
        var_r9 = var_r8;
loop_2:
        func_0209e41c(var_r9);
        var_r7 += 1;
        var_r9 += 0x14;
        if (var_r7 < 0x10) {
            goto loop_2;
        }
        var_r6 += 1;
        var_r8 += 0x140;
    } while (var_r6 < 0x14);
    var_r6_2 = 0;
    var_r8_2 = arg0 + 0x1900;
    do {
        var_r7_2 = 0;
        var_r9_2 = var_r8_2;
loop_6:
        func_0209e41c(var_r9_2);
        var_r7_2 += 1;
        var_r9_2 += 0x14;
        if (var_r7_2 < 0x10) {
            goto loop_6;
        }
        var_r6_2 += 1;
        var_r8_2 += 0x140;
    } while (var_r6_2 < 0x14);
    func_0209e204(arg0 + 0x3D74);
    func_ov000_021d57f8(arg0 + 0x3214);
    func_ov000_021d57f8(arg0 + 0x3200);
    return arg0;
}
