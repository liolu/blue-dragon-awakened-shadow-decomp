#include "m2c.h"

s32 ArrayNew(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
void *gsUdpEngineGetEngine();                              /* extern */
s32 gt2CreateSocket(void *, M2C_UNK *, s32, s32, M2C_UNK *); /* extern */
M2C_UNK gt2Listen(s32, M2C_UNK *);              /* extern */
s32 gt2GetLocalIP(s32);                             /* extern */
s16 gt2GetLocalPort(s32);                             /* extern */
M2C_UNK gt2SetUnrecognizedMessageCallback(s32, M2C_UNK *);              /* extern */
M2C_UNK gt2AddressToString(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK gsUdpMsgHandlerFree;
extern M2C_UNK gsUdpSocketError;
extern M2C_UNK gsUdpUnrecognizedMsgCB;
extern M2C_UNK gsUdpConnAttemptCB;

s32 gsUdpEngineInitialize(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8,
                          s32 arg9, s32 argA) {
    u8 sp4[24];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r5;
    s32 var_r6;
    void *temp_r4;

    var_r6  = arg1;
    var_r5  = arg2;
    temp_r4 = gsUdpEngineGetEngine();
    if (var_r6 == 0) {
        var_r6 = 0x5DC;
    }
    M2C_FIELD(temp_r4, s32 *, 0x24) = arg3;
    M2C_FIELD(temp_r4, s32 *, 0x28) = arg8;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x18) = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = arg7;
    if (var_r5 == 0) {
        var_r5 = 0x5B4;
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg9;
    gt2AddressToString(0, arg0, sp4);
    if (gt2CreateSocket(temp_r4, sp4, var_r5, var_r6, &gsUdpSocketError) != 0) {
        return 3;
    }
    temp_r0                      = ArrayNew(0xC, 1, NULL);
    M2C_FIELD(temp_r4, s32 *, 4) = temp_r0;
    if (temp_r0 == 0) {
        return 1;
    }
    temp_r0_2                    = ArrayNew(0x3C, 1, &gsUdpMsgHandlerFree);
    M2C_FIELD(temp_r4, s32 *, 8) = temp_r0_2;
    if (temp_r0_2 == 0) {
        return 1;
    }
    gt2SetUnrecognizedMessageCallback(M2C_FIELD(temp_r4, s32 *, 0), &gsUdpUnrecognizedMsgCB);
    gt2Listen(M2C_FIELD(temp_r4, s32 *, 0), &gsUdpConnAttemptCB);
    M2C_FIELD(temp_r4, s32 *, 0x34) = gt2GetLocalIP(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s16 *, 0x38) = gt2GetLocalPort(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s32 *, 0x30) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = 1;
    if (argA != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = argA;
    } else {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = 0;
    }
    return 0;
}
