#include "m2c.h"

M2C_UNK func_02081090(s32, s32);                    /* extern */
M2C_UNK func_02096d8c();                            /* extern */
extern s32 data_02164e04;

void func_02096de4(void *arg0, s32 arg1) {
    func_02096d8c();
    func_02081090(data_02164e04 + 0x2C, arg1);
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
}
