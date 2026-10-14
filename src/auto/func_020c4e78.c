#include "m2c.h"

M2C_UNK func_020aafc0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020ab810(s32);                         /* extern */
M2C_UNK func_020afbac(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020afc28(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02165978;
extern M2C_UNK data_02166810;
extern M2C_UNK data_02166c54;

void func_020c4e78(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r5_2;
    s8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s8 *, 0x1C);
    if (temp_r0 == 2) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 8);
        func_020afbac(&data_02166810, temp_r5);
        func_020afc28(&data_02166c54, temp_r5);
    } else if (((u32) (u8) temp_r0 <= 1U) && (arg1 == 0)) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        func_020afbac(&data_02166c54, temp_r5_2);
        func_020afc28(&data_02166810, temp_r5_2);
    }
    if ((arg1 != 0) && (M2C_FIELD(arg0, s8 *, 0x1C) != 2)) {

    } else {
        func_020ab810(M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_020aafc0(&data_02165978, M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0xF9) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s16 *, 0x120) = -1;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
}
