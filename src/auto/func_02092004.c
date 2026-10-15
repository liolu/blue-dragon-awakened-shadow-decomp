#include "m2c.h"

M2C_UNK func_02091258(void *);                      /* extern */
M2C_UNK func_020918d0(void *);                      /* extern */
M2C_UNK func_020919b0(void *);                      /* extern */
M2C_UNK func_02091cac(void *);                      /* extern */
M2C_UNK func_02091f1c(void *);                      /* extern */
M2C_UNK func_02092d28(void *, M2C_UNK);             /* extern */
s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_02092004(void *arg0) {
    s32 temp_r0;
    void *temp_r1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) > 0) {
        temp_r0                       = M2C_FIELD(arg0, s32 *, 0x1FC) - func_ov000_021bec20(&data_ov000_021f4924);
        M2C_FIELD(arg0, s32 *, 0x1FC) = temp_r0;
        if (temp_r0 <= 0) {
            func_02092d28(arg0, 2);
        }
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_r1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) M2C_FIELD(temp_r1, s32 *, 0x318);
        M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) M2C_FIELD(temp_r1, s32 *, 0x31C);
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_r1, s32 *, 0x320);
    }
    func_020918d0(arg0);
    func_02091cac(arg0);
    func_02091f1c(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x21C) != 0) {
        return;
    }
    func_020919b0(arg0);
    func_02091258(arg0);
}
