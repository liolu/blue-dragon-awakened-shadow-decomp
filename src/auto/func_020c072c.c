#include "m2c.h"

s32 func_020c3558(void **);                         /* extern */
extern M2C_UNK data_ov000_021e8c30;

M2C_UNK *func_020c072c(void *arg0) {
    M2C_UNK *temp_r0_2;
    s32 temp_r0;
    void **temp_r0_3;

    temp_r0_3 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0_3 == NULL) || (M2C_FIELD(*temp_r0_3, s32 (**)(void **, M2C_UNK), 0x64)(temp_r0_3, 0) == 0)) {
        temp_r0_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
        if ((temp_r0_2 != NULL) && (M2C_FIELD(temp_r0_2, u16 *, 0x34) & 1)) {
            return temp_r0_2;
        }
        return &data_ov000_021e8c30;
    }
    temp_r0 = func_020c3558(M2C_FIELD(arg0, void ***, 0xC));
    if (temp_r0 == 0) {
        return &data_ov000_021e8c30;
    }
    return temp_r0 + 0x318;
}
