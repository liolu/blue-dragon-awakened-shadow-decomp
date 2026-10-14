#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);
M2C_UNK func_02042410(void);

s32 func_02043e44(void) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    var_r5 = 0;
    temp_r4 = func_02042410();
    temp_r0 = func_02008ae0();
    if ((temp_r4 != 0) && (M2C_FIELD(temp_r4, s32 *, 0x2260) == 9) && (M2C_FIELD(temp_r4, u8 *, 0x226B) == 0)) {
        var_r5 = temp_r4 + 0x2144;
    }
    func_02008af4(temp_r0);
    return var_r5;
}
