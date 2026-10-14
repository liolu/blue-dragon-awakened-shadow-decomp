#include "m2c.h"

M2C_UNK func_ov000_021c6170(void *);                /* extern */

void func_0208e5f4(void *arg0, s32 arg1) {
    void *temp_r5;
    void *var_r0;

    if ((arg1 != 0) && (var_r0 = M2C_FIELD(arg0, void **, 0xC), (var_r0 != NULL))) {
        do {
            temp_r5 = M2C_FIELD(var_r0, void **, 0x10);
            func_0208e5f4(var_r0, 1);
            var_r0 = temp_r5;
        } while (temp_r5 != NULL);
    }
    func_ov000_021c6170(arg0);
}
