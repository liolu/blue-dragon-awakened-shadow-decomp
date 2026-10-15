#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018dc;

void func_0200438c(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    disableBankForX_(&data_021018dc);
}
