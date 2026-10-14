#include "m2c.h"

M2C_UNK func_0207d6cc(void *);                      /* extern */
s32 func_0207df10();                                /* extern */
s32 func_ov000_021bec30(M2C_UNK *);                 /* extern */
extern u8 data_02167184;
extern M2C_UNK data_ov000_021f4924;

void func_0207d708(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (u16) (((*(u16 *)0x04000130 | *(u16 *)0x027FFFA8) ^ 0x2FFF) & 0x2FFF);
    if ((M2C_FIELD(arg0, u8 *, 0x5C) == 0) || (data_02167184 != 0) || (func_0207df10() != 0)) {
        func_0207d6cc(arg0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x5E) == 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
    M2C_FIELD(arg0, u8 *, 0x5E) = 0U;
    if (M2C_FIELD(arg0, u8 *, 0x5D) == 0) {
        temp_r0 = ~M2C_FIELD(arg0, s32 *, 0x48) & M2C_FIELD(arg0, s32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x38);
    if ((temp_r1 != 0) && (temp_r1 == M2C_FIELD(arg0, s32 *, 0x48))) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= (s32) M2C_FIELD(arg0, s32 *, 0x54)) {
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x50) + func_ov000_021bec30(&data_ov000_021f4924);
            M2C_FIELD(arg0, s32 *, 0x50) = temp_r1_2;
            if (temp_r1_2 >= (s32) M2C_FIELD(arg0, s32 *, 0x58)) {
                M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
                M2C_FIELD(arg0, s32 *, 0x50) = 0;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + func_ov000_021bec30(&data_ov000_021f4924));
    } else {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) & ~M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, u8 *, 0x5D) = 0U;
}
