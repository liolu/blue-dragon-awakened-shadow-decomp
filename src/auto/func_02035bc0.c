#include "m2c.h"

M2C_UNK func_020072b4(M2C_UNK);                     /* extern */
s32 func_020359f4(M2C_UNK);                         /* extern */
M2C_UNK func_02035ac4(M2C_UNK);                     /* extern */
extern M2C_UNK data_0210ca1c;

s32 func_02035bc0(M2C_UNK arg0) {
    s32 temp_r0;
    u32 var_r7;
    u32 var_r8;

    var_r7 = 0;
loop_1:
    func_02035ac4(arg0);
    var_r8 = 0;
loop_2:
    if (M2C_FIELD(&data_0210ca1c, s32 *, 0x50) == 0) {
        return 0;
    }
    func_020072b4(0x64);
    temp_r0 = func_020359f4(arg0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r8 += 1;
    if (var_r8 >= 0x14U) {
        var_r7 += 1;
        if (var_r7 >= 8U) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}
