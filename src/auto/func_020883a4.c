#include "m2c.h"

M2C_UNK func_0207c344(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020dce1c(s32, s32);                    /* extern */
M2C_UNK func_020dd910(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov000_021bfd90(M2C_UNK *);             /* extern */
M2C_UNK func_ov000_021c5448(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov000_021c546c(M2C_UNK);               /* extern */
s32 func_ov000_021c54a8();                          /* extern */
s32 func_ov000_021d2228();                          /* extern */
s32 func_ov000_021d223c();                          /* extern */
extern M2C_UNK data_02110134;
extern M2C_UNK data_02165748;
extern M2C_UNK data_0216636c;
extern M2C_UNK data_ov000_021f4950;

s32 func_020883a4(void *arg0) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_0207c344(&data_02110134, 8, 0);
            break;
        case 1:
            func_0207c344(&data_02110134, 9, 0);
            break;
        case 2:
            func_0207c344(&data_02110134, 0xA, 0);
            break;
        case 3:
            func_0207c344(&data_02110134, 0xB, 0);
            M2C_FIELD(&data_02110134, s8 *, 0x108) = 1;
            break;
        case 4:
            func_0207c344(&data_02110134, 0x13, 0);
            break;
        case 5:
            func_0207c344(&data_02110134, 0x14, 0);
            break;
        case 6:
            func_0207c344(&data_02110134, 0xF, 0);
            break;
        case 7:
            func_ov000_021bfd90(&data_ov000_021f4950);
            func_0207c344(&data_02110134, 7, 0);
            break;
        case 8:
            func_0207c344(&data_02110134, 0x11, 0);
            break;
        case 9:
            func_0207c344(&data_02110134, 0x12, 0);
            break;
        case 10:
            func_020dd910(M2C_FIELD(arg0, s32 *, 8), 1);
            break;
        case 11:
            func_020dce1c(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
            break;
        case 12:
            M2C_FIELD(&data_0216636c, s16 *, 0xAE) = (s16) M2C_FIELD(arg0, s32 *, 8);
            func_0207c344(&data_02110134, 0xE, 0);
            break;
        case 13:
            func_0207c344(&data_02110134, 0x16, 0);
            break;
        case 14:
            func_0207c344(&data_02110134, 0xC, 0);
            break;
        case 15:
            func_0207c344(&data_02110134, 0x18, 0);
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(&data_02165748, u16 *, 0x2C) = (u16) (M2C_FIELD(&data_02165748, u16 *, 0x2C) | 1);
        if ((func_ov000_021d2228() != 0) && (func_ov000_021d2228(), (func_ov000_021d223c() != 0))) {
            func_ov000_021c5448(func_ov000_021c54a8(), 1);
        } else {
            func_ov000_021c546c(1);
        }
    }
    return 0;
}
