#include "m2c.h"

M2C_UNK func_ov000_021c09a0(M2C_UNK *, s32);        /* extern */
M2C_UNK func_ov000_021c0a38(M2C_UNK *, s16);        /* extern */
M2C_UNK func_ov000_021c0ac0(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_02084554(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
    case 1:
        func_ov000_021c0ac0(&data_ov000_021f4d24);
        break;
    case 2:
        func_ov000_021c0a38(&data_ov000_021f4d24, (s16) M2C_FIELD(arg0, s32 *, 0));
        break;
    default:
        func_ov000_021c09a0(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0));
        break;
    }
    return 0;
}
