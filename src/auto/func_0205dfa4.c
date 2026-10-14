#include "m2c.h"

s32 func_0205ecd8();                                /* extern */
extern s32 data_0210f118;

s32 func_0205dfa4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (data_0210f118 != 1) {
        return 2;
    }
    if (arg0 == 0) {
        return 2;
    }
    return func_0205ecd8(arg0, arg1, arg2, arg3);
}
