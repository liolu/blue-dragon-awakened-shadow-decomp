#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_0207d4e4(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_ov000_021bb160();                          /* extern */
s32 func_ov000_021bb1ec(s32, s32);                  /* extern */
s32 func_ov000_021bb268(s32);                       /* extern */
M2C_UNK func_ov000_021bb2b4(s32, s32);              /* extern */
extern s32 data_020feb44;

void func_020af0f8(void *arg0) {
    s32 var_r0;
    s8 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_r0 = M2C_FIELD(arg0, s8 *, 8);
        if ((s32) temp_r0 > 0) {
            M2C_FIELD(arg0, s8 *, 8) = (s8) (temp_r0 + 1);
            return;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_r0 = func_0207d4a4(0xA8);
        if (var_r0 != 0) {
            var_r0 = func_ov000_021bb160();
        }
        M2C_FIELD(arg0, s32 *, 0) = var_r0;
    }
    if (func_ov000_021bb1ec(M2C_FIELD(arg0, s32 *, 0), data_020feb44) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = func_0207d4e4(func_ov000_021bb268(M2C_FIELD(arg0, s32 *, 0)), 8, 0);
    func_ov000_021bb2b4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s8 *, 8) = 1;
}
