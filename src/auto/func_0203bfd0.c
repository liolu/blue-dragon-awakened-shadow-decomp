#include "m2c.h"

M2C_UNK func_0203a15c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f8f08;
extern M2C_UNK data_020f8f20;

void func_0203bfd0(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        func_0203a15c(&data_020f8f20);
        return;
    }
    func_0203a15c(&data_020f8f08);
}
