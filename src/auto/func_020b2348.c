#include "m2c.h"

M2C_UNK **func_0207d4a4(M2C_UNK);                   /* extern */
M2C_UNK func_020b1e08();                            /* extern */
extern M2C_UNK data_020fefdc;
extern M2C_UNK data_02167098;

void func_020b2348(void) {
    M2C_UNK **temp_r0;

    if (M2C_FIELD(&data_02167098, M2C_UNK ***, 4) == NULL) {
        temp_r0 = func_0207d4a4(0x6C);
        if (temp_r0 != NULL) {
            func_020b1e08();
            *temp_r0 = &data_020fefdc;
        }
        M2C_FIELD(&data_02167098, M2C_UNK ***, 4) = temp_r0;
    }
    M2C_FIELD(M2C_FIELD(&data_02167098, M2C_UNK ***, 4), s32 *, 0x34) = 0x83;
}
