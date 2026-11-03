#include "m2c.h"

extern u8 *data_020fbcdc;
extern u8 data_020fbce0[];
s32 func_02073234(u8 *, s32);                 /* extern */
s32 closesocket(s32, s32);                  /* extern */
s32 SocketShutDown(s32);                       /* extern */
s32 gsifree(u8 *);                      /* extern */

void func_02071ccc(u8 *arg0) {
    u8 *r4;

    r4 = arg0;
    if (arg0 == NULL) {
        r4 = data_020fbcdc;
    }
    if (*(s32 *) (r4 + 0xBC) != 0) {
        func_02073234(r4, 2);
    }
    if (*(s32 *) r4 != -1) {
        if (*(s32 *) (r4 + 0xC4) != 0) {
            closesocket(*(s32 *) r4, *(s32 *) (r4 + 0xC4));
        }
    }
    *(s32 *) r4          = -1;
    *(s32 *) (r4 + 0xAC) = 0;
    if (*(s32 *) (r4 + 0xC4) != 0) {
        SocketShutDown(*(s32 *) (r4 + 0xC4));
    }
    if ((u8 *) r4 == data_020fbce0) {
        return;
    }
    gsifree(r4);
}
