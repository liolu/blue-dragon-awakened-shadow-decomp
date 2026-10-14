#include "m2c.h"

extern M2C_UNK data_021019a4;

void func_02038048(void) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&data_021019a4, void **, 4), s32 **, 0xA4);
    if (temp_r1 != NULL) {
        *temp_r1 = 0;
    }
}
