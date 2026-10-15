#include "engine.h"
#include "m2c.h"

M2C_UNK func_020449a8(M2C_UNK);
M2C_UNK func_02044aa0(void);
void func_02045958(M2C_UNK);
void func_0204599c(void);
void func_020459a4(M2C_UNK);
void func_020459c0(M2C_UNK);

void func_02045908(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_020449a8(1);
    temp_r0 = func_02044aa0();
    if (temp_r0 < 4) {
        func_02045958(temp_r0);
        return;
    }
    if (temp_r0 < 5) {
        func_0204599c();
        return;
    }
    if (temp_r0 == 5) {
        func_020459a4(temp_r4);
        return;
    }
    func_020459c0(temp_r4);
}
