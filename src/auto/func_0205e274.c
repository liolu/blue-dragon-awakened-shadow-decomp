#include "m2c.h"
typedef struct {
    s32 w[129];
} Buf;
typedef s32 (*Cb)(void **, Buf *, s32);
extern s32 gpiSetErrorString(void **, void *);
extern s32 gpiGetInfo(void **, s32, s32, s32, Cb, s32);
extern s32 data_020fa980;
extern s32 data_020fa96c;
s32 func_0205e274(void **arg0, s32 arg1, s32 arg2, s32 arg3, Cb arg4, s32 arg5) {
    void *r4;
    if (arg0 == NULL || (r4 = *arg0) == NULL || arg1 == 0) {
        return 2;
    }
    if (arg4 == NULL) {
        gpiSetErrorString(arg0, &data_020fa96c);
        return 2;
    }
    if (M2C_FIELD(r4, s32 *, 0x108) != 0) {
        Buf buf = {0};
        arg4(arg0, &buf, arg5);
        return 0;
    }
    if (M2C_FIELD(r4, s32 *, 0x1F4) == 4) {
        gpiSetErrorString(arg0, &data_020fa980);
        return 2;
    }
    return gpiGetInfo(arg0, arg1, arg2, arg3, arg4, arg5);
}
