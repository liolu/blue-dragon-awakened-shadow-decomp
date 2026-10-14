#include "m2c.h"

M2C_UNK func_02017ba0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020952b4();                            /* extern */
M2C_UNK func_020952d4(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_020a5e6c(s32);                         /* extern */
M2C_UNK func_020a6448(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020ddc6c();                            /* extern */
M2C_UNK func_020de010(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_ov000_021c59ec(M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_ov000_021d2254();                      /* extern */
extern s32 data_02165738;
extern s32 data_021672d4;

s32 func_02089b8c(void *arg0) {
    u8 sp0[64];
    M2C_UNK *var_r5;
    s32 temp_r4;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0);
    switch (temp_r0) {
    default:
        break;
    case 0:
        if (data_02165738 != 0) {
            func_020952b4();
        }
        break;
    case 1:
        if (data_02165738 != 0) {
            func_020952d4(data_02165738, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, M2C_UNK **, 8));
        }
        break;
    case 2:
        if (data_02165738 != 0) {
            func_020a5e6c(M2C_FIELD(arg0, s32 *, 4));
        }
        break;
    case 3:
        if (data_02165738 != 0) {
            func_020a6448(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, M2C_UNK **, 8));
        }
        break;
    case 4:
        func_02017ba0(sp0, 0, 0x40);
        var_r5 = M2C_FIELD(arg0, M2C_UNK **, 8);
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_ov000_021c59ec(sp0, var_r5, arg0 + 0xC);
            var_r5 = sp0;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 4);
        func_020ddc6c();
        if (data_021672d4 != 0) {
            func_020de010(data_021672d4, var_r5, temp_r4);
        }
        break;
    case 5:
        func_ov000_021d2254();
        break;
    }
    return 0;
}
