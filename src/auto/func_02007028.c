#include "m2c.h"

M2C_UNK func_0200694c(s32, void *);                 /* extern */
M2C_UNK func_02006b24();                            /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
extern M2C_UNK data_02101980;

void func_02007028(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02008ae0();
    temp_r5 = *M2C_FIELD(&data_02101980, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0200694c(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02006b24();
    func_02008af4(temp_r4);
}
