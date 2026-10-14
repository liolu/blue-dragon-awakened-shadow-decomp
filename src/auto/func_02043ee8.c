#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);

extern M2C_UNK data_0210e5f0;

void func_02043ee8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02008ae0();
    M2C_FIELD(&data_0210e5f0, s32 *, 0x28) = arg0;
    func_02008af4(temp_r0);
}
