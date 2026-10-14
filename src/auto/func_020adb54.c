#include "m2c.h"

M2C_UNK func_0207d4cc();                      /* extern */
M2C_UNK func_02090ab8();                      /* extern */
M2C_UNK func_02090ca4();                      /* extern */
M2C_UNK func_ov000_021bb274();                /* extern */
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

s32 func_020adb54(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 != NULL) {
        if (temp_r4 != NULL) {
            func_ov000_021bb274(temp_r4);
            M2C_FIELD(temp_r4, M2C_UNK **, 0x68) = &data_ov000_021eb498;
            func_02090ca4(temp_r4 + 0x68);
            func_02090ab8(temp_r4 + 0x68);
            M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_ov000_021eb574;
            func_02090ca4(temp_r4);
            func_02090ab8(temp_r4);
            func_0207d4cc(temp_r4);
        }
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0207d4cc();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return M2C_FIELD(arg0, s8 *, 0xC) = 0;
}
