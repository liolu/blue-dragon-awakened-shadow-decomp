#include "m2c.h"

s32 STD_ConvertStringSjisToUnicode(M2C_UNK *, s32 *, M2C_UNK, s32 *, s32); /* extern */
extern M2C_UNK data_0210fe6c;

M2C_UNK *func_0207896c(M2C_UNK arg0) {
    s32 sp8;
    s32 sp4;
    M2C_UNK *var_r3;
    s32 temp_r0;

    sp8                                            = 0x7F;
    sp4                                            = 0x80;
    temp_r0                                        = STD_ConvertStringSjisToUnicode(&data_0210fe6c, &sp8, arg0, &sp4, 0);
    var_r3                                         = &data_0210fe6c;
    *((u16 *) ((s8 *) &data_0210fe6c + (sp8 * 2))) = 0;
    if (temp_r0 != 0) {
        var_r3 = NULL;
    }
    return var_r3;
}
