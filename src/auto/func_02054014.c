#include "m2c.h"

s32 func_02057fa8();                                /* extern */
void *func_02059234();                              /* extern */
s32 func_0206d4c4(s32);                             /* extern */
s32 gt2AddressToString(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070f5c(s32, s32, u8, M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK ServerBrowserSendNatNegotiateCookieToServerA(s32, s32, u16, s32);          /* extern */
extern M2C_UNK func_02058dcc;
extern M2C_UNK func_02058dd0;

s32 func_02054014(void *arg0) {
    s32 temp_r0;
    s32 var_r6;
    void *temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r4 = func_02059234();
        ServerBrowserSendNatNegotiateCookieToServerA(M2C_FIELD(temp_r4, s32 *, 0xE4),
                                                     gt2AddressToString(M2C_FIELD(arg0, s32 *, 4), 0, 0),
                                                     M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, s32 *, 8));
        if (func_02057fa8() != 0) {
            return 2;
        }
    }
    var_r6 = 0;
loop_4:
    temp_r0 = func_02070f5c(func_0206d4c4(*M2C_FIELD(func_02059234(), s32 **, 4)), M2C_FIELD(arg0, s32 *, 8),
                            M2C_FIELD(arg0, u8 *, 0), &func_02058dcc, &func_02058dd0, arg0);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (temp_r0 != 3) {
        return temp_r0;
    }
    var_r6 += 1;
    if (var_r6 >= 5) {
        return temp_r0;
    }
    goto loop_4;
}
