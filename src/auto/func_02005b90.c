#include "m2c.h"

s32 func_02004160();                                /* extern */
extern M2C_UNK data_021018e0;

void func_02005b90(void) {
    M2C_FIELD(&data_021018e0, s32 *, 0x18) = func_02004160();
}
