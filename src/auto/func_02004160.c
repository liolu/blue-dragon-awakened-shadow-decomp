#include "m2c.h"

M2C_UNK func_02004058(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018dc;

void func_02004160(void) {
    *(s32 *)0x04001000 &= ~0x80000000;
    func_02004058(&data_021018dc);
}
