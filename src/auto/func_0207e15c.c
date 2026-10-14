#include "m2c.h"

M2C_UNK func_0207e060();                            /* extern */
extern u8 data_0211045c;
extern M2C_UNK data_02110468;
extern M2C_UNK data_0211048c;

s32 func_0207e15c(void *arg0, s32 arg1) {
    s32 var_r0;

    if (data_0211045c == 0) {
        func_0207e060();
    }
    if (*((M2C_UNK *)((s8 *)&data_02110468 + (arg1 * 4))) == 0) {
        *((M2C_UNK *)((s8 *)&data_02110468 + (arg1 * 4))) = arg0;
        var_r0 = 0;
    } else {
        M2C_FIELD(*((M2C_UNK *)((s8 *)&data_0211048c + (arg1 * 4))), void **, 0x18) = arg0;
        var_r0 = *((M2C_UNK *)((s8 *)&data_0211048c + (arg1 * 4)));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    *((M2C_UNK *)((s8 *)&data_0211048c + (arg1 * 4))) = arg0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
