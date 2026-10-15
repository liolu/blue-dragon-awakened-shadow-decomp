#include "engine.h"
#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);
void MI_CpuCopy8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020446fc(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020449a8(M2C_UNK);

void DWC_AC_SetSpecifyApEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;

    temp_r4 = func_020449a8(1);
    if (arg3 != 0) {
        MI_CpuCopy8(arg3, temp_r4 + 0x18, 0xA);
    } else {
        MI_CpuFill8(temp_r4 + 0x18, 0, 0xA);
    }
    M2C_FIELD(temp_r4, s8 *, 0x22) = (s8) arg4;
    func_020446fc(arg0, arg1, arg2);
}
