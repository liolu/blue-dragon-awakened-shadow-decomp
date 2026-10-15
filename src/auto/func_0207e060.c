#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_0211045c;
extern M2C_UNK data_02110468;
extern M2C_UNK data_0211048c;

void func_0207e060(void) {
    if (data_0211045c != 0) {
        return;
    }
    MI_CpuFill8(&data_02110468, 0, 0x24);
    MI_CpuFill8(&data_0211048c, 0, 0x24);
    data_0211045c = 1;
}
