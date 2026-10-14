#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);

extern M2C_UNK *data_02101d60;

s32 func_0200a898(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02008ae0();
    var_r4 = 0;
    var_r1 = data_02101d60;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02008af4(temp_r0);
    return var_r4;
}
