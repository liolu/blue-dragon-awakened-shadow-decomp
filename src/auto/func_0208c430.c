#include "m2c.h"

extern M2C_UNK data_02164ee4;

s16 func_0208c430(void) {
    s16 var_r0;
    s32 var_ip;
    void *var_lr;

    var_r0 = 1;
loop_1:
    var_ip = 0;
    var_lr = M2C_FIELD(&data_02164ee4, void **, 4);
    if (M2C_FIELD(&data_02164ee4, void **, 4) != NULL) {
    loop_2:
        if (var_r0 == M2C_FIELD(var_lr, s16 *, 0x14)) {
            var_r0 += 1;
            if ((s32) var_r0 >= 0xC8) {
                return 0;
            }
            var_ip = 1;
            goto block_7;
        }
        var_lr = M2C_FIELD(var_lr, void **, 4);
        if (var_lr == NULL) {
            goto block_7;
        }
        goto loop_2;
    }
block_7:
    if (var_ip == 0) {
        return var_r0;
    }
    goto loop_1;
}
