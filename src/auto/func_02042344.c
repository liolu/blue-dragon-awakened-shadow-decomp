#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);

extern void *data_0210e5ec;

s32 func_02042344(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02008ae0();
    var_r4 = 0;
    if (data_0210e5ec != NULL) {
        var_r4 = M2C_FIELD(data_0210e5ec, s32 *, 0x2260);
    }
    func_02008af4(temp_r0);
    return var_r4;
}
