#include "m2c.h"

M2C_UNK func_020077d0(M2C_UNK *);                   /* extern */
M2C_UNK func_0200a350();                            /* extern */
M2C_UNK func_0200aa60();                            /* extern */
extern s32 data_02101d44;
extern M2C_UNK data_02101d48;

void func_0200a2f0(void) {
    if (data_02101d44 != 0) {
        return;
    }
    data_02101d44 = 1;
    func_020077d0(&data_02101d48);
    func_0200a350();
    func_0200aa60();
}
