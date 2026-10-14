#include "m2c.h"

extern M2C_UNK data_0211045c;
extern M2C_UNK data_02110468;
extern M2C_UNK data_0211048c;

void func_0207e1d0(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    if (M2C_FIELD(&data_0211045c, void **, 4) == arg0) {
        M2C_FIELD(&data_0211045c, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x18);
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
    } else {
        *((M2C_UNK *)((s8 *)&data_02110468 + (M2C_FIELD(arg0, s32 *, 0x1C) * 4))) = M2C_FIELD(arg0, void **, 0x18);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
        return;
    }
    *((M2C_UNK *)((s8 *)&data_0211048c + (M2C_FIELD(arg0, s32 *, 0x1C) * 4))) = M2C_FIELD(arg0, void **, 0x14);
}
