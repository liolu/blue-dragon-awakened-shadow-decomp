#include "m2c.h"

M2C_UNK func_02071ab0(void *);                      /* extern */
M2C_UNK func_02071b5c(void *);                      /* extern */
M2C_UNK func_02072d90(void *);                      /* extern */
extern void *data_020fbcdc;

void func_02071a74(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_020fbcdc;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) != 0) {
        func_02071b5c(var_r4);
    }
    func_02071ab0(var_r4);
    func_02072d90(var_r4);
}
