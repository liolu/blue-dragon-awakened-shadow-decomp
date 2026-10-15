#include "m2c.h"

M2C_UNK WCM_EndSearchAsync();                            /* extern */
M2C_UNK WCM_DisconnectAsync();                            /* extern */
M2C_UNK WCM_TerminateAsync();                            /* extern */
u32 WCM_GetPhase();                                /* extern */
void *func_020449a8(M2C_UNK);                       /* extern */
M2C_UNK func_02044a7c(M2C_UNK);                     /* extern */
M2C_UNK func_02046114(u8);                          /* extern */

u8 func_02045ed8(void) {
    u32 temp_r0;
    u8 var_r5;
    void *temp_r4;

    temp_r4 = func_020449a8(0x10);
    var_r5  = 9;
    temp_r0 = WCM_GetPhase();
    switch (temp_r0) {
        default:
            break;
        case 3:
            var_r5 = M2C_FIELD(temp_r4, u8 *, 0xD0E);
            if (((u32) (M2C_FIELD(temp_r4, u8 *, 0xD0C) << 0x18) >> 0x1E) == 1) {
                var_r5                                                                    = 7;
                M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), s8 *, 0x444) = 0;
            } else if (((u32) var_r5 >= 3U) && ((u32) var_r5 <= 5U)) {
                func_02046114(var_r5);
            }
            break;
        case 6:
            WCM_EndSearchAsync();
            break;
        case 9:
            WCM_DisconnectAsync();
            break;
        case 12:
            WCM_TerminateAsync();
            func_02044a7c(4);
            var_r5 = 0x11;
            break;
        case 11:
            func_02044a7c(0);
            var_r5 = 0x11;
            break;
    }
    return var_r5;
}
