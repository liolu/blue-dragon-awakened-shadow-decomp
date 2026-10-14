#include "m2c.h"
#include "engine.h"

void func_02008468(void);
M2C_UNK func_020084e0(void);
void func_02008694(void);
M2C_UNK func_020086d4(void);
void func_020086e4(M2C_UNK);
M2C_UNK func_02008ae0(void);
void func_02008af4(M2C_UNK);
void func_020426d8(void);
void func_02043d60(void);

extern s32 data_0210e5ec;

s32 func_02041774(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02008ae0();
    if (data_0210e5ec != 0) {
        func_02008af4(temp_r0);
        return 1;
    }
    if (arg0 == 0) {
        func_02008af4(temp_r0);
        return 1;
    }
    if (arg0 & 0x1F) {
        func_02008af4(temp_r0);
        return 1;
    }
    if ((u32) arg1 < 0x2300U) {
        func_02008af4(temp_r0);
        return 6;
    }
    data_0210e5ec = arg0;
    M2C_FIELD(arg0, s32 *, 0x2260) = 1;
    M2C_FIELD(data_0210e5ec, s16 *, 0x2280) = 0;
    M2C_FIELD(data_0210e5ec, s16 *, 0x2268) = 0;
    M2C_FIELD(data_0210e5ec, s8 *, 0x226A) = 0;
    M2C_FIELD(data_0210e5ec, s8 *, 0x226B) = 0;
    M2C_FIELD(data_0210e5ec, s16 *, 0x2282) = 0;
    M2C_FIELD(data_0210e5ec, s16 *, 0x22F8) = 0;
    func_020426d8();
    func_02043d60();
    if (func_020084e0() == 0) {
        func_02008468();
    }
    if (func_020086d4() == 0) {
        func_02008694();
    }
    func_020086e4(data_0210e5ec + 0x22CC);
    func_02008af4(temp_r0);
    return 0;
}
