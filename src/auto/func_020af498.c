#include "m2c.h"

M2C_UNK func_020af18c(M2C_UNK *, s16);              /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *);             /* extern */
extern M2C_UNK data_02166794;
extern M2C_UNK data_ov000_021f4d24;

void func_020af498(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == -1) {
        return;
    }
    func_ov000_021c09a0(&data_ov000_021f4d24);
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    func_020af18c(&data_02166794, M2C_FIELD(arg0, s16 *, 0x1E));
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
}
