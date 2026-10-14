#include "m2c.h"

M2C_UNK func_02004058(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018d2;

void func_0200408c(void) {
    *(s32 *)0x04000000 &= ~0x40000000;
    func_02004058(&data_021018d2);
}
