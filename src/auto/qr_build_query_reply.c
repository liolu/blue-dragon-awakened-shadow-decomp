#include "m2c.h"

M2C_UNK qr_build_partial_query_reply(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void qr_build_query_reply(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    qr_build_partial_query_reply(arg0, arg1, 0, arg2, arg3);
    qr_build_partial_query_reply(arg0, arg1, 1, arg4, arg5);
    qr_build_partial_query_reply(arg0, arg1, 2, arg6, arg7);
}
