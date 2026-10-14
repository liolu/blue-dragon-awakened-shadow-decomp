#include "m2c.h"

s32 func_02004498();                                /* extern */
M2C_UNK func_020090e0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_0200979c(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020e5b44;

void func_020052e4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02004498();
    if ((data_020e5b44 != -1) && (arg2 > 0x1CU)) {
        func_020090e0(data_020e5b44, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0200979c(arg0, temp_ip + arg1, arg2);
}
