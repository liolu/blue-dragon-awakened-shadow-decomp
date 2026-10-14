#include "m2c.h"

M2C_UNK func_020069f8(s32, void *);                 /* extern */
M2C_UNK func_02006adc(void *);                      /* extern */
M2C_UNK func_02007078(void *);                      /* extern */
M2C_UNK func_02007130();                            /* extern */
M2C_UNK func_020073b4();                            /* extern */
M2C_UNK func_020073e8();                            /* extern */
M2C_UNK func_020078c8(void *);                      /* extern */
M2C_UNK func_02008fc4();                            /* extern */
extern M2C_UNK data_02101980;

void func_02006ef4(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_02101980, void ***, 8);
    func_020073b4();
    func_020078c8(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020069f8(temp_r0, temp_r4);
    }
    func_02006adc(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02007078(temp_r4 + 0x9C);
    func_020073e8();
    func_02007130();
    func_02008fc4();
}
