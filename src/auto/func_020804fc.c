#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_0208b488(s32);                         /* extern */
M2C_UNK func_ov000_021ba82c(s32);                   /* extern */
extern M2C_UNK data_02110554;

void func_020804fc(void *arg0) {
    s32 temp_r4;
    s32 var_r3;
    void *var_r0;

    var_r0                         = arg0;
    M2C_FIELD(var_r0, s8 *, 0)     = -1;
    var_r3                         = 0;
    M2C_FIELD(var_r0, s32 *, 4)    = -1;
    M2C_FIELD(var_r0, s8 *, 8)     = 0;
    M2C_FIELD(var_r0, s8 *, 0x1FC) = -1;
    do {
        M2C_FIELD(var_r0, s8 *, 0xC)   = -1;
        M2C_FIELD(var_r0, s32 *, 0x10) = -1;
        var_r3 += 1;
        M2C_FIELD(var_r0, s8 *, 0x14) = 0;
        var_r0 += 0xC;
    } while (var_r3 < 0x24);
    temp_r4 = M2C_FIELD(&data_02110554, s32 *, 4);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0208b488(temp_r4);
        func_02077f50(temp_r4 + 0x448);
        func_ov000_021ba82c(temp_r4);
        func_0207d4cc(temp_r4);
    }
    M2C_FIELD(&data_02110554, s32 *, 4) = 0;
}
