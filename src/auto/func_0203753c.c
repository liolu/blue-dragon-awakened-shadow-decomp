#include "m2c.h"

M2C_UNK func_020070e0(s32);                         /* extern */
void *func_02036c04();                              /* extern */
M2C_UNK func_02036d7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02036d90(void *, M2C_UNK);             /* extern */
M2C_UNK func_02036da4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0203753c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_r1;
    void *temp_r0;

    temp_r0 = func_02036c04();
    if (temp_r0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(temp_r0, u8 *, 8);
    switch (temp_r1) {                              /* irregular */
    case 7:
        M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
        func_02036d7c(temp_r0, 0);
        M2C_FIELD(temp_r0, u8 *, 8) = 9U;
        return;
    case 8:
        M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
        func_02036d7c(temp_r0, 0);
        M2C_FIELD(temp_r0, u8 *, 8) = 0U;
        if (M2C_FIELD(temp_r0, s32 *, 4) != 2) {
            return;
        }
        M2C_FIELD(temp_r0, s32 *, 4) = 0;
        func_020070e0(M2C_FIELD(temp_r0, s32 *, 0));
        return;
    case 4:
        M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
        func_02036d90(temp_r0, 0);
        M2C_FIELD(temp_r0, u8 *, 8) = 6U;
        return;
    default:
        func_02036da4(arg0, arg1, arg2, 0);
        return;
    }
}
