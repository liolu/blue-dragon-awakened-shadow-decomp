#include "m2c.h"

M2C_UNK func_0207d4cc();                      /* extern */
M2C_UNK func_02090ab8();                      /* extern */
M2C_UNK func_02090ca4();                      /* extern */
M2C_UNK func_ov000_021bb274();                /* extern */
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void func_020dc930(void *arg0) {
    s32 var_r8;
    void *temp_r9;
    void *var_r10;

    var_r8  = 0;
    var_r10 = arg0;
    do {
        M2C_FIELD(var_r10, s16 *, 0) = 0;
        temp_r9                      = M2C_FIELD(var_r10, void **, 4);
        if (temp_r9 != NULL) {
            if (temp_r9 != NULL) {
                func_ov000_021bb274(temp_r9);
                M2C_FIELD(temp_r9, M2C_UNK **, 0x68) = &data_ov000_021eb498;
                func_02090ca4(temp_r9 + 0x68);
                func_02090ab8(temp_r9 + 0x68);
                M2C_FIELD(temp_r9, M2C_UNK **, 0) = &data_ov000_021eb574;
                func_02090ca4(temp_r9);
                func_02090ab8(temp_r9);
                func_0207d4cc(temp_r9);
            }
            M2C_FIELD(var_r10, void **, 4) = NULL;
        }
        if (M2C_FIELD(var_r10, s32 *, 8) != 0) {
            func_0207d4cc();
            M2C_FIELD(var_r10, s32 *, 8) = 0;
        }
        var_r8 += 1;
        var_r10 += 0xC;
    } while (var_r8 < 0x20);
}
