#include "m2c.h"

M2C_UNK func_020077e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200786c(M2C_UNK *);                   /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
s32 func_02027b10(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_021102d0;

s32 func_0207d458(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    func_020077e8(&data_021102d0);
    temp_r5 = func_02008ae0();
    temp_r4 = func_02027b10(M2C_FIELD(arg0, s32 *, 0x1C), 4);
    func_0200786c(&data_021102d0);
    func_02008af4(temp_r5);
    return temp_r4;
}
