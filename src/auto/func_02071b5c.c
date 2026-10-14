#include "m2c.h"

u32 func_0205c600();                                /* extern */
M2C_UNK func_020731d4(void *);                      /* extern */
M2C_UNK func_02073234(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020fca94;

void func_02071b5c(void *arg0) {
    s32 temp_r3;
    u32 temp_r0;
    u32 temp_r3_2;

    temp_r0 = func_0205c600();
    if (M2C_FIELD(arg0, s32 *, 0) == -1) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r3 > 0) && ((u32) (temp_r0 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        if (temp_r3 >= 4) {
            M2C_FIELD(arg0, s32 *, 0xB8) = 0;
            M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, M2C_UNK *, s32), 0x9C)(5, &data_020fca94, M2C_FIELD(arg0, s32 *, 0x10C));
            return;
        }
        func_02073234(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
        goto block_14;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xB4) != 0) && ((u32) (temp_r0 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        func_02073234(arg0, 1);
    } else {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xAC);
        if (((u32) (temp_r0 - temp_r3_2) > 0xEA60U) || (temp_r3_2 == 0) || (temp_r0 < temp_r3_2)) {
            func_02073234(arg0, 0);
        }
    }
block_14:
    if ((u32) (func_0205c600() - M2C_FIELD(arg0, s32 *, 0xB0)) <= 0x4E20U) {
        return;
    }
    func_020731d4(arg0);
}
