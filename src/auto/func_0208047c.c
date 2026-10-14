#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_02080424(s32);                         /* extern */
M2C_UNK func_0208b488(s32);                         /* extern */
M2C_UNK func_ov000_021ba82c(s32);                   /* extern */
extern M2C_UNK data_02110554;

void func_0208047c(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = M2C_FIELD(&data_02110554, s32 *, 0);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_02080424(temp_r4);
            func_0207d4cc(temp_r4);
        }
        M2C_FIELD(&data_02110554, s32 *, 0) = 0;
    }
    temp_r4_2 = M2C_FIELD(&data_02110554, s32 *, 4);
    if (temp_r4_2 == 0) {
        return;
    }
    if (temp_r4_2 != 0) {
        func_0208b488(temp_r4_2);
        func_02077f50(temp_r4_2 + 0x448);
        func_ov000_021ba82c(temp_r4_2);
        func_0207d4cc(temp_r4_2);
    }
    M2C_FIELD(&data_02110554, s32 *, 4) = 0;
}
