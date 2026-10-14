#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02040680(M2C_UNK *);                   /* extern */
M2C_UNK func_020406d4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0204078c(M2C_UNK *, M2C_UNK *);        /* extern */
extern s8 data_0210e460;
extern M2C_UNK data_0210e5d8;

void func_0203ec08(M2C_UNK *arg0, M2C_UNK arg1) {
    u8 sp0[92];
    s32 temp_r4;

    func_02040680(sp0);
    temp_r4 = func_02008ae0();
    func_020406d4(sp0, &data_0210e5d8, 0x14);
    func_020406d4(sp0, arg0, arg1);
    func_0204078c(sp0, &data_0210e5d8);
    func_02008af4(temp_r4);
    data_0210e460 = 1;
}
