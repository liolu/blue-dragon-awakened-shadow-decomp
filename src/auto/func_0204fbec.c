#include "m2c.h"

M2C_UNK func_02009978(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02048738(s32, M2C_UNK);                    /* extern */
s32 func_0204f190();                                /* extern */
s32 func_0204fa58();                                /* extern */
s32 func_0205e884(s32, s32);                        /* extern */
M2C_UNK func_0205e8fc(s32, s32);                    /* extern */
extern M2C_UNK data_0210e8cc;

void func_0204fbec(M2C_UNK arg0) {
    s32 temp_r0;

    if ((M2C_FIELD(&data_0210e8cc, void **, 0xC) != NULL) && (func_0204fa58() != 0) && (func_0204f190() != 0)) {
        temp_r0 = func_02048738(func_0204f190(), arg0);
        if ((temp_r0 != 0) && (temp_r0 != -1)) {
            if (func_0205e884(M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 4), temp_r0) != 0) {
                func_0205e8fc(M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 4), temp_r0);
            }
        }
    }
    func_02009978(arg0, 0, 0xC);
}
