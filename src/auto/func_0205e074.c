/* near start: 13 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct Z {
    s32 a[8];
} Z;

extern s32 gpiConnect(void **, void *, void *, void *, void *, s8 *, s8 *, s32, s32, s32, s32, s32 (*)(void **, Z *, s32),
                      s32);
extern void gpiSetErrorString(void **, void *);
extern u8 data_020fa96c;
extern u8 data_020fa97c;

typedef struct Ctx {
    u8 p0[0x108];
    s32 f108;
} Ctx;

s32 func_0205e074(Ctx **arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 (*arg5)(Ctx **, Z *, s32), s32 arg6) {
    Ctx *temp_ip;

    if (arg0 == NULL || (temp_ip = *arg0) == NULL) {
        return 2;
    }
    if (arg1 == NULL || *arg1 == 0) {
        return 2;
    }
    if (arg2 == NULL || *arg2 == 0) {
        return 2;
    }
    if (arg5 == NULL) {
        gpiSetErrorString((void **) arg0, &data_020fa96c);
        return 2;
    }
    if (temp_ip->f108 != 0) {
        Z sp24 = {0, 0, 0, 0, 0, 0, 0, 0};
        arg5(arg0, &sp24, arg6);
        return 0;
    }
    return gpiConnect((void **) arg0, &data_020fa97c, &data_020fa97c, &data_020fa97c, &data_020fa97c, arg1, arg2, 0, arg3, 0,
                      arg4, (s32(*)(void **, Z *, s32)) arg5, arg6);
}
