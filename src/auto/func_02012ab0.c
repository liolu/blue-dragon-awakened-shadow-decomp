#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);

extern M2C_UNK data_02104360;

s32 func_02012ab0(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02008ae0();
    if (M2C_FIELD(&data_02104360, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_02104360, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_02008af4(temp_r0);
    return (s32) var_r4;
}
