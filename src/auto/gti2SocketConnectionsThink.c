#include "m2c.h"

s32 TableMapSafe2(s32, M2C_UNK *, s32 *);           /* extern */
s32 current_time();                                /* extern */
extern M2C_UNK gti2SocketConnectionsThinkMap;

s32 gti2SocketConnectionsThink(void *arg0) {
    s32 sp0;

    sp0 = current_time();
    if (TableMapSafe2(M2C_FIELD(arg0, s32 *, 0xC), &gti2SocketConnectionsThinkMap, &sp0) == 0) {
        return 1;
    }
    return 0;
}
