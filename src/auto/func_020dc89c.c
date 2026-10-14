#include "m2c.h"

M2C_UNK func_0207d4cc();                      /* extern */
M2C_UNK func_02090ab8();                      /* extern */
M2C_UNK func_02090ca4();                      /* extern */
void *func_020dc84c();                              /* extern */
M2C_UNK func_ov000_021bb274();                /* extern */
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void func_020dc89c(void) {
    void *temp_r0;
    void *temp_r5;

    temp_r0 = func_020dc84c();
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s16 *, 0) = 0;
    temp_r5 = M2C_FIELD(temp_r0, void **, 4);
    if (temp_r5 != NULL) {
        if (temp_r5 != NULL) {
            func_ov000_021bb274(temp_r5);
            M2C_FIELD(temp_r5, M2C_UNK **, 0x68) = &data_ov000_021eb498;
            func_02090ca4(temp_r5 + 0x68);
            func_02090ab8(temp_r5 + 0x68);
            M2C_FIELD(temp_r5, M2C_UNK **, 0) = &data_ov000_021eb574;
            func_02090ca4(temp_r5);
            func_02090ab8(temp_r5);
            func_0207d4cc(temp_r5);
        }
        M2C_FIELD(temp_r0, void **, 4) = NULL;
    }
    if (M2C_FIELD(temp_r0, s32 *, 8) == 0) {
        return;
    }
    func_0207d4cc();
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
}
