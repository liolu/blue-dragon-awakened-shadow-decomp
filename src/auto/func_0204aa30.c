#include "m2c.h"

extern u8 data_020f95f8[];
typedef void *(*FnP)(void *, u32);

s32 func_0204aa30(u8 *arg0, u32 *arg1, u32 arg2) {
    FnP fn;
    u32 p;

    fn = *(FnP *) (arg0 + 0x1010);
    if (arg2 == 0) {
        return 0;
    }
    p       = (u32) fn(data_020f95f8, arg2);
    arg1[0] = p;
    if (arg1[0] == 0) {
        return 0;
    }
    arg1[1] = arg1[0];
    arg1[3] = arg2;
    arg1[2] = arg1[0] + arg1[3];
    return 1;
}
