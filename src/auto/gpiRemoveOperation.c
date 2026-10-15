#include "m2c.h"

M2C_UNK gpiDestroyOperation();                            /* extern */

void gpiRemoveOperation(void **arg0, void *arg1) {
    void *temp_r3;
    void *var_ip;
    void *var_r2;

    temp_r3 = *arg0;
    var_ip  = NULL;
    var_r2  = M2C_FIELD(temp_r3, void **, 0x5C4);
    if (var_r2 == NULL) {
        return;
    }
loop_2:
    if (var_r2 == arg1) {
        if (var_ip == NULL) {
            M2C_FIELD(temp_r3, void **, 0x5C4) = (void *) M2C_FIELD(var_r2, void **, 0x20);
        } else {
            M2C_FIELD(var_ip, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
        }
        gpiDestroyOperation(arg0, arg1);
        return;
    }
    var_ip = var_r2;
    var_r2 = M2C_FIELD(var_r2, void **, 0x20);
    if (var_r2 == NULL) {
        return;
    }
    goto loop_2;
}
