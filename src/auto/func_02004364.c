#include "m2c.h"

M2C_UNK func_02004188(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018da;

void func_02004364(void) {
    *(s32 *)0x04001000 &= ~0x40000000;
    func_02004188(&data_021018da);
}
