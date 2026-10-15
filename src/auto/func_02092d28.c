#include "m2c.h"

M2C_UNK func_02091330(void *, s32);                 /* extern */
M2C_UNK func_0209195c(void *);                      /* extern */
M2C_UNK func_02091c7c(void *);                      /* extern */
M2C_UNK func_02091ec8(void *);                      /* extern */
extern M2C_UNK data_020fde38;
extern M2C_UNK data_020fde50;
extern M2C_UNK data_020fde68;

s32 func_02092d28(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    if ((arg1 <= 0) && (arg1 >= 6)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x204);
    if (temp_r0 == arg1) {
        return 0;
    }
    var_r4                        = 0;
    M2C_FIELD(arg0, s32 *, 0x204) = arg1;
    switch (arg1) {
        default:
            break;
        case 1:
            func_02091c7c(arg0);
            var_r4                        = *((M2C_UNK *) ((s8 *) &data_020fde68 + (M2C_FIELD(arg0, s32 *, 0x6C) * 4)));
            M2C_FIELD(arg0, s32 *, 0x20C) = 0;
            break;
        case 2:
            var_r4                        = *((M2C_UNK *) ((s8 *) &data_020fde68 + (M2C_FIELD(arg0, s32 *, 0x6C) * 4)));
            M2C_FIELD(arg0, s32 *, 0x20C) = 0;
            break;
        case 3:
            var_r4                        = *((M2C_UNK *) ((s8 *) &data_020fde38 + (M2C_FIELD(arg0, s32 *, 0x6C) * 4)));
            M2C_FIELD(arg0, s32 *, 0x20C) = 1;
            break;
        case 4:
            var_r4                        = *((M2C_UNK *) ((s8 *) &data_020fde50 + (M2C_FIELD(arg0, s32 *, 0x6C) * 4)));
            M2C_FIELD(arg0, s32 *, 0x20C) = 2;
            break;
        case 5:
            if (temp_r0 == 0) {
                M2C_FIELD(arg0, s32 *, 0x204) = 0;
            } else {
                func_02091ec8(arg0);
            }
            break;
    }
    if (M2C_FIELD(arg0, u8 *, 0x21C) == 0) {
        if ((var_r4 != 0) && (M2C_FIELD(arg0, s32 *, 0x208) != var_r4)) {
            M2C_FIELD(arg0, s32 *, 0x208) = var_r4;
            func_02091330(arg0, var_r4);
            func_0209195c(arg0);
        }
    }
    return 1;
}
