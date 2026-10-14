#include "m2c.h"

void *func_0207d4a4(M2C_UNK);                       /* extern */
s32 func_020dce9c();                                /* extern */
void *func_020dcf20();                              /* extern */
M2C_UNK func_ov000_021e25b8();                      /* extern */
M2C_UNK func_ov000_021e26a8();                      /* extern */
extern void *data_021672c8;

void func_020dceb8(void) {
    void *var_r0;

    if (func_020dce9c() != 0) {
        return;
    }
    func_ov000_021e25b8();
    func_ov000_021e26a8();
    var_r0 = func_0207d4a4(0x30);
    if (var_r0 != NULL) {
        var_r0 = func_020dcf20();
    }
    data_021672c8 = var_r0;
    M2C_FIELD(var_r0, s8 *, 0x20) = 1;
}
