#include "m2c.h"
void DWCi_SetError(s32, s32);
s32 func_0204e34c(void);
void func_0204f1ac(s32, s32);
void func_02050154(s32, s32);
void func_02052cec(s32, s32);
u32 func_0205803c(u32 arg0) {
    s32 b;
    s32 a;
    if (arg0 == 0) {
        return 0U;
    }
    switch (arg0) {
        case 1:
            a = 6;
            b = -0x32;
            break;
        case 2:
            a = 6;
            b = -0x3C;
            break;
        case 3:
            a = 6;
            b = -0x1E;
            break;
        case 4:
            a = 6;
            b = -0x50;
            break;
        case 5:
            a = 6;
            b = -0x14;
            break;
    }
    switch (func_0204e34c()) {
        case 2:
            func_0204f1ac(a, b - 0xFA00);
            break;
        case 4:
            func_02050154(a, b - 0x12110);
            break;
        case 5:
            func_02052cec(a, b - 0x14820);
            break;
        default:
            DWCi_SetError(a, b - 0x16F30);
            break;
    }
    return arg0;
}
