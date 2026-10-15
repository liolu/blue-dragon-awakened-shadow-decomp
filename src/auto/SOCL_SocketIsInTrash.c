#include "m2c.h"

s32 SOCLi_SocketGetNextPtr(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK SOCLiSocketListTrash;

s32 SOCL_SocketIsInTrash(M2C_UNK arg0) {
    if (SOCLi_SocketGetNextPtr(&SOCLiSocketListTrash, arg0) != 0) {
        return 1;
    }
    return 0;
}
