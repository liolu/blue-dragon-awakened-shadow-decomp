#include "m2c.h"

M2C_UNK func_0205b794(void *, s32);                 /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_0205b864(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
        do {
            func_0205b794(arg0, var_r4);
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0));
    }
    func_0205cb50(M2C_FIELD(arg0, void **, 0x14));
    func_0205cb50(arg0);
}
