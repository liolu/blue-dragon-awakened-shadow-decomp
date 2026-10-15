#include "m2c.h"

s32 memcmp(void *, M2C_UNK *, M2C_UNK);      /* extern */
s32 SBAllocServer(M2C_UNK, s32, u16);               /* extern */
s32 SBIsNullServer();                                /* extern */
M2C_UNK SBServerListAppendServer(M2C_UNK, s32);                /* extern */
s32 ServerSizeForFlags(u8);                              /* extern */
s32 FullRulesPresent(void *, s32);                     /* extern */
s32 AllKeysPresent(M2C_UNK, void *, s32);            /* extern */
M2C_UNK ParseServerIPPort(M2C_UNK, u8 *, s32, s32 *, u16 *); /* extern */
s32 ParseServer(M2C_UNK, s32, u8 *, s32, s32);    /* extern */
extern M2C_UNK data_020fd150;

s32 IncomingListParseServer(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;
    u8 temp_r8;

    if (arg2 < 1) {
        return 0;
    }
    temp_r8 = *arg1;
    temp_r0 = ServerSizeForFlags(temp_r8);
    if (arg2 < temp_r0) {
        return 0;
    }
    if ((temp_r8 & 0x40) && (AllKeysPresent(arg0, arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if ((temp_r8 & 0x80) && (FullRulesPresent(arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if (memcmp(arg1 + 1, &data_020fd150, 4) == 0) {
        return -1;
    }
    ParseServerIPPort(arg0, arg1, arg2, &sp8, &sp4);
    temp_r7 = SBAllocServer(arg0, sp8, sp4);
    if (SBIsNullServer() != 0) {
        return -2;
    }
    temp_r4 = ParseServer(arg0, temp_r7, arg1, arg2, 1);
    SBServerListAppendServer(arg0, temp_r7);
    return temp_r4;
}
