#include "m2c.h"
#include "engine.h"

M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);
M2C_UNK func_0200f23c(void);
void func_0200f984(M2C_UNK);

extern M2C_UNK data_021039ec;

s32 func_0200f5fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = func_02008ae0();
    if (func_0200f23c() == 0) {
        func_02008af4(temp_r5);
        return 1;
    }
    M2C_FIELD(&data_021039ec, s32 *, 0x20) = arg3;
    M2C_FIELD(&data_021039ec, s32 *, 0x24) = arg4;
    M2C_FIELD(&data_021039ec, s32 *, 0x28) = arg2;
    func_0200f984((u8) arg0 | 0x02006100);
    func_0200f984(0x01010000 | (u16) arg1);
    func_02008af4(temp_r5);
    return 0;
}
