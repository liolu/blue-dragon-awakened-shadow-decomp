#include "m2c.h"

M2C_UNK func_020d9d5c(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK data_02167280;

s32 func_020d9c6c(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0);
    if (temp_r1 == NULL) {
        return 0;
    }
    func_020d9d5c(&data_02167280, M2C_FIELD(temp_r1, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4));
    return 1;
}
