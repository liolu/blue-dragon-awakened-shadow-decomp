#include "m2c.h"

M2C_UNK MIi_CpuClear32(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0210e740;
extern M2C_UNK data_0210e7c0;

void func_0204e4e0(void) {
    MIi_CpuClear32(0, &data_0210e740, 0x80);
    MIi_CpuClear32(0, &data_0210e7c0, 0x100);
}
