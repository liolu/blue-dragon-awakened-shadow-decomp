#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210e468;

void CPSi_SslCleanup(void) {
    MI_CpuFill8(&data_0210e468, 0, 0x170);
}
