#include "m2c.h"

M2C_UNK func_020bebb4(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020bf738(void *);                          /* extern */
s32 func_020c3558(s32);                             /* extern */
M2C_UNK func_ov000_02174428(s32, M2C_UNK);          /* extern */

void func_020bf684(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    void *temp_r2;

    func_020bebb4(arg0, 0, 0, arg1, 1, 2);
    temp_r2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_r2, u8 *, 0xC) = (u8) (M2C_FIELD(temp_r2, u8 *, 0xC) & ~4);
    if (func_020bf738(arg0) == 0) {
        return;
    }
    temp_r0 = func_020c3558(M2C_FIELD(arg0, s32 *, 0xC));
    func_ov000_02174428(temp_r0, 0);
    func_ov000_02174428(temp_r0, 1);
    func_ov000_02174428(temp_r0, 2);
    func_ov000_02174428(temp_r0, 3);
    func_ov000_02174428(temp_r0, 4);
    func_ov000_02174428(temp_r0, 5);
    func_ov000_02174428(temp_r0, 6);
}
