#include "m2c.h"

M2C_UNK func_02004058(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018d4;

void func_020040b0(void) {
    *(s32 *)0x04000000 &= ~0x80000000;
    func_02004058(&data_021018d4);
}
