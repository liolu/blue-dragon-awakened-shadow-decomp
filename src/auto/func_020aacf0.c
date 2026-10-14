#include "m2c.h"

M2C_UNK func_020240c0(s32, s32);                    /* extern */
s32 func_020244fc();                                /* extern */
s32 func_020245b8();                                /* extern */
s32 func_02024600(s32, s32);                        /* extern */
M2C_UNK func_020aa9b0(void *);                      /* extern */
M2C_UNK func_ov000_021bdc9c(M2C_UNK);               /* extern */
s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_020aacf0(void *arg0) {
    s32 temp_r0;
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x37);
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x58) - func_ov000_021bec20(&data_ov000_021f4924);
        M2C_FIELD(arg0, s32 *, 0x58) = temp_r0;
        if (temp_r0 <= 0) {
            if (M2C_FIELD(arg0, u8 *, 0x37) == 0) {
                M2C_FIELD(arg0, s32 *, 0x58) = 0x28;
                M2C_FIELD(arg0, u8 *, 0x37) = 1U;
            } else {
                func_ov000_021bdc9c(0x100);
                func_020240c0(func_02024600(0x43E10000, func_020245b8()), 0x43800000);
                M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0x294 - func_020244fc());
                M2C_FIELD(arg0, u8 *, 0x37) = 0U;
            }
        }
    }
    if ((M2C_FIELD(arg0, u8 *, 0x3B) == 0) && (M2C_FIELD(arg0, u8 *, 0x3C) == 0) && (temp_r4 == M2C_FIELD(arg0, u8 *, 0x37)) && (M2C_FIELD(arg0, u8 *, 0x53) == M2C_FIELD(arg0, u8 *, 0x50)) && (M2C_FIELD(arg0, u8 *, 0x54) == M2C_FIELD(arg0, u8 *, 0x51)) && (M2C_FIELD(arg0, u8 *, 0x55) == M2C_FIELD(arg0, u8 *, 0x52))) {
        return;
    }
    func_020aa9b0(arg0);
    M2C_FIELD(arg0, u8 *, 0x53) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
    M2C_FIELD(arg0, u8 *, 0x54) = (u8) M2C_FIELD(arg0, u8 *, 0x51);
    M2C_FIELD(arg0, u8 *, 0x55) = (u8) M2C_FIELD(arg0, u8 *, 0x52);
    if (M2C_FIELD(arg0, u8 *, 0x3B) != 0) {
        M2C_FIELD(arg0, s8 *, 0x39) = 1;
        M2C_FIELD(arg0, s8 *, 0x3A) = 1;
    }
    M2C_FIELD(arg0, u8 *, 0x3B) = 0U;
    M2C_FIELD(arg0, u8 *, 0x3C) = 0U;
}
