#include "m2c.h"

s32 gpiInitialize();                                /* extern */
extern s32 __GSIACResult;

s32 gpInitialize(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (__GSIACResult != 1) {
        return 2;
    }
    if (arg0 == 0) {
        return 2;
    }
    return gpiInitialize(arg0, arg1, arg2, arg3);
}
