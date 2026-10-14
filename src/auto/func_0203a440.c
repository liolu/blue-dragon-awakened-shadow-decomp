#include "m2c.h"

M2C_UNK func_02006d44(s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_020070e0(s32);                         /* extern */
M2C_UNK func_02007558(s32, s32, u8);                /* extern */
M2C_UNK func_020077d0(s32);                         /* extern */
s32 func_0203a2f4(void *);                          /* extern */
extern M2C_UNK func_0203a0ac;

s32 func_0203a440(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4 = func_0203a2f4(arg2);
    func_02007558(arg1, arg0, M2C_FIELD(arg2, u8 *, 3));
    func_020077d0(arg1 + 0xE0);
    func_02006d44(arg1 + 0x20, &func_0203a0ac, arg1, arg0 + temp_r4, (s32) M2C_FIELD(arg2, u16 *, 0), (s32) M2C_FIELD(arg2, u8 *, 2));
    func_020070e0(arg1 + 0x20);
    return arg0 + temp_r4;
}
