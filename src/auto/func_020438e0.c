#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);
M2C_UNK func_02009978(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02042410(void);

void func_020438e0(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    temp_r0 = func_02042410();
    if (temp_r0 == 0) {
        func_02008af4(temp_r4);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2270);
    if (temp_r0_2 != 0) {
        temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x2274);
        if (temp_r2 > 0) {
            func_02009978(temp_r0_2, 0, temp_r2);
        }
    }
    func_02008af4(temp_r4);
}
