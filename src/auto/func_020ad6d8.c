#include "m2c.h"

M2C_UNK func_020ad3a8(M2C_UNK *);                   /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *);             /* extern */
extern M2C_UNK data_02166710;
extern M2C_UNK data_ov000_021f4d24;

void func_020ad6d8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == -1) {
        return;
    }
    func_ov000_021c09a0(&data_ov000_021f4d24);
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    func_020ad3a8(&data_02166710);
}
