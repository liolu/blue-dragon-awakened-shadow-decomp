#include "m2c.h"

M2C_UNK func_020829fc(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov000_021c559c(M2C_UNK, M2C_UNK *);        /* extern */
extern M2C_UNK func_02082b40;

void func_02082b4c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_ov000_021c559c(0x14, &func_02082b40);
    if (temp_r0 == 0) {
        return;
    }
    func_020829fc(temp_r0, arg0, arg1, arg2);
}
