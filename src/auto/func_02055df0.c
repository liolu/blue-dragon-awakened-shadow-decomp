#include "m2c.h"
s64 OS_GetTick(void);
void func_02059244(s32);
u8 *func_02059234(void);
s32 func_02057fa8(void);
void func_02055b28(s32, s32, s32);
s32 func_02055940(void);
void func_02053ac4(s32);
void func_02052cec(s32, s32);
s32 func_02055df0(s32 arg0) {
    u8 *temp_r4;

    *(s32 *) (func_02059234() + 0x208) = 0;
    *(s32 *) (func_02059234() + 0x204) = 0;
    *(u8 *) (func_02059234() + 0x1A7)  = 0;
    temp_r4                            = func_02059234();
    *(s64 *) (temp_r4 + 0x1CC)         = OS_GetTick();
    if (func_02059234()[0x15] == 0) {
        func_02059244(3);
        func_02053ac4(0);
        if (func_02057fa8() != 0) {
            return 0;
        }
    } else if (func_02059234()[0x15] == 1) {
        func_02055b28(0, 0, arg0);
        if (func_02055940() != 0) {
            return 0;
        }
    } else if (func_02059234()[0x15] == 3) {
        func_02052cec(6, 0xFFFEC5E6);
        return 0;
    }
    return 1;
}
