#include "m2c.h"

M2C_UNK func_ov000_021c0e00(M2C_UNK *, s32, s32);   /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_020d96d8(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 == NULL) {
        return 0;
    }
    func_ov000_021c0e00(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(temp_r2, s32 *, 0x10));
    return 1;
}
