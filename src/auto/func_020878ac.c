#include "m2c.h"

M2C_UNK func_02097ec8(void *);                      /* extern */
s32 func_ov000_021c4f0c(s32, s32, M2C_UNK);         /* extern */
M2C_UNK func_ov000_021c6170(void *);                /* extern */

s32 func_020878ac(void *arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0);
    temp_r4 = func_ov000_021c4f0c(M2C_FIELD(temp_r5, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 4), 1);
    func_02097ec8(temp_r5);
    func_ov000_021c6170(M2C_FIELD(arg0, void **, 0));
    return temp_r4;
}
