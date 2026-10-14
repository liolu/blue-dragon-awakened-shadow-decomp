#include "m2c.h"

M2C_UNK func_020077d0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210e5f0;
extern M2C_UNK data_0210e5fc;

void func_02043d60(void) {
    if (M2C_FIELD(&data_0210e5f0, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0210e5f0, u8 *, 0) = 1U;
    M2C_FIELD(&data_0210e5f0, s32 *, 0x24) = 0;
    M2C_FIELD(&data_0210e5f0, s32 *, 8) = 0;
    M2C_FIELD(&data_0210e5f0, s32 *, 4) = 0;
    func_020077d0(&data_0210e5fc);
}
