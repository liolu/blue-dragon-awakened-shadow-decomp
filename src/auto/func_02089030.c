#include "m2c.h"

M2C_UNK func_ov000_021c546c(M2C_UNK);               /* extern */
M2C_UNK func_ov010_021f8880();                      /* extern */
extern M2C_UNK data_02165748;

s32 func_02089030(s32 *arg0) {
    if (*arg0 == 9) {
        func_ov010_021f8880();
        M2C_FIELD(&data_02165748, u16 *, 0x2C) = (u16) (M2C_FIELD(&data_02165748, u16 *, 0x2C) | 1);
        func_ov000_021c546c(1);
    }
    return 0;
}
