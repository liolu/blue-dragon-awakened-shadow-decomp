#include "m2c.h"

M2C_UNK func_ov000_02175428(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_ov000_021ee0f8;

void func_020bd238(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == -1) {
        return;
    }
    func_ov000_02175428(data_ov000_021ee0f8, temp_r1, -1, 0);
}
