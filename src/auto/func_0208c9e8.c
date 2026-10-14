#include "m2c.h"

M2C_UNK func_02082408(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0208b9bc(void *, M2C_UNK);             /* extern */
M2C_UNK func_0208c610();                            /* extern */
extern s32 data_02164e04;

void func_0208c9e8(void *arg0) {
    s32 temp_r0;

    func_0208c610();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4A4);
    if ((temp_r0 != 0) && (temp_r0 != 5) && (M2C_FIELD(arg0, s32 *, 0x47C) != 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x4A1) == 0) {
            func_0208b9bc(arg0 + 0x28, 0x12C);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x4A4) != 2) {
        return;
    }
    func_02082408(data_02164e04, 0xE, 0);
}
