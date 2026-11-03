#include "m2c.h"

s32 func_02052cec(s32, s32);

s32 func_02058124(s32 arg0, s32 unused, s32 arg2) {
    s32 r0;
    s32 r2;

    if (arg0 == 0) {
        return 0;
    }
    r0 = arg0;
    r2 = arg2;
    switch (arg0) {
        case 1:
            r0 = 9;
            r2 = -1;
            break;
        case 2:
            r0 = 6;
            r2 = -50;
            break;
        case 3:
            r0 = 6;
            r2 = -30;
            break;
    }
    func_02052cec(r0, r2 + (s32) 0xFFFEB010);
    return arg0;
}
