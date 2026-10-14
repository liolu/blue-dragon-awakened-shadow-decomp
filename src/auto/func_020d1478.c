#include "m2c.h"

M2C_UNK func_ov000_021ca660(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_02167174;

void func_020d1478(void) {
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;

    if (M2C_FIELD(&data_02167174, u8 *, 2) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_ov000_021ca660(0, var_r1);
    if (M2C_FIELD(&data_02167174, u8 *, 1) == 0) {
        var_r1_2 = 1;
    } else {
        var_r1_2 = 0;
    }
    func_ov000_021ca660(1, var_r1_2);
}
