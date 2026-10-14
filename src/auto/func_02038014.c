#include "m2c.h"

extern M2C_UNK data_021019a4;

void func_02038014(void) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&data_021019a4, void **, 4), void **, 0xA4);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, void **, 0) = (void *) M2C_FIELD(&data_021019a4, void **, 4);
    M2C_FIELD(temp_r1, s8 *, 8) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x60) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x38) = 0;
}
