#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_0205aca8(M2C_UNK);                         /* extern */
M2C_UNK func_0205b4bc(M2C_UNK);                     /* extern */
s32 func_0205b744();                                /* extern */
M2C_UNK func_0205cb04(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0204cc64;
extern M2C_UNK func_0204cc78;
extern M2C_UNK func_0204cc94;
extern M2C_UNK func_0204ccac;

s32 func_02047d58(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r4;
    s32 var_r5;

    var_r5 = 0;
    func_02000b9c(0x02000C34);
    temp_r4 = func_0205aca8(arg0);
    if (func_0205b744() != 0) {
        func_0205b4bc(arg0);
        var_r5 = 1;
    }
    if (temp_r4 < 0) {
        if (var_r5 != 0) {
            var_r4 = 2;
        } else {
            var_r4 = 3;
        }
    } else if (var_r5 != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_0205cb04(&func_0204cc64, &func_0204cc94, &func_0204cc78, &func_0204ccac);
    return var_r4;
}
