#include "m2c.h"

M2C_UNK func_0207d4cc();                      /* extern */
M2C_UNK func_02090ab8();                      /* extern */
M2C_UNK func_02090ca4();                      /* extern */
M2C_UNK func_ov000_021bb274();                /* extern */
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void func_02077d90(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r5;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_0207d4cc();
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (arg1 != 0) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_r5 != NULL) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
            switch (temp_r0) {                      /* irregular */
                case 1:
                    if (temp_r5 != NULL) {
                        M2C_FIELD(temp_r5, M2C_UNK **, 0) = &data_ov000_021eb574;
                        func_02090ca4(temp_r5);
                        func_02090ab8(temp_r5);
                        func_0207d4cc(temp_r5);
                    }
                    break;
                case 2:
                    if (temp_r5 != NULL) {
                        M2C_FIELD(temp_r5, M2C_UNK **, 0) = &data_ov000_021eb498;
                        func_02090ca4(temp_r5);
                        func_02090ab8(temp_r5);
                        func_0207d4cc(temp_r5);
                    }
                    break;
                case 3:
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
                    break;
            }
            M2C_FIELD(arg0, void **, 0x1C) = NULL;
            M2C_FIELD(arg0, s32 *, 0x18)   = 0;
        }
    }
}
