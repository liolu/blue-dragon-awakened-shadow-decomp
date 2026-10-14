#include "m2c.h"

M2C_UNK func_020077e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200786c(M2C_UNK *);                   /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02027aac(s32, s32);                    /* extern */
u32 func_02027bac(s32);                             /* extern */
extern M2C_UNK data_020fd37c;
extern M2C_UNK data_02110288;
extern M2C_UNK data_021102d0;

void func_0207d1a8(void *arg0, s32 arg1) {
    s32 temp_r6;
    u32 temp_r0;

    if (arg1 == 0) {
        return;
    }
    if ((arg1 >= (s32) M2C_FIELD(&data_020fd37c, s32 *, 8)) && (arg1 <= (s32) M2C_FIELD(&data_020fd37c, s32 *, 0xC))) {
        M2C_FIELD(&data_02110288, s32 *, 0x10) = (s32) (M2C_FIELD(&data_02110288, s32 *, 0x10) + 1);
    }
    temp_r0 = func_02027bac(arg1);
    if ((temp_r0 >= (u32) (M2C_FIELD(&data_020fd37c, s32 *, 0) - 4)) && (temp_r0 < (u32) (M2C_FIELD(&data_020fd37c, s32 *, 0) + 4))) {
        M2C_FIELD(&data_02110288, s32 *, 0x10) = (s32) (M2C_FIELD(&data_02110288, s32 *, 0x10) + 1);
    }
    if (M2C_FIELD(arg0, u8 *, 0x19) != 0) {
        func_02027bac(arg1);
    }
    func_020077e8(&data_021102d0);
    temp_r6 = func_02008ae0();
    func_02027aac(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0200786c(&data_021102d0);
    func_02008af4(temp_r6);
}
