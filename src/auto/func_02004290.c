#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018d2;

void func_02004290(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    disableBankForX_(&data_021018d2);
}
