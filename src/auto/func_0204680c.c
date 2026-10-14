#include "m2c.h"

s32 func_02042344();                                /* extern */
void *func_020449a8(M2C_UNK);                       /* extern */
s32 func_02044a60();                                /* extern */
s32 func_02046908(void *);                          /* extern */
s32 func_0204696c(void *);                          /* extern */
s32 func_020469fc();                                /* extern */
s32 func_02046a28(void *);                          /* extern */
s32 func_02046a94(void *);                          /* extern */
s32 func_02046aa8();                                /* extern */
M2C_UNK func_0204b30c();                            /* extern */
M2C_UNK func_0204b404();                            /* extern */

s32 func_0204680c(void) {
    s32 var_r4;
    u32 temp_r0;
    void *temp_r5;

    var_r4 = func_02044a60();
    temp_r5 = func_020449a8(0x10);
    if (func_02042344() == 9) {
        temp_r0 = var_r4 - 0xA;
        switch (temp_r0) {                          /* switch 1 */
        default:                                    /* switch 1 */
            break;
        case 0:                                     /* switch 1 */
            var_r4 = func_02046908(temp_r5);
            break;
        case 2:                                     /* switch 1 */
            var_r4 = func_0204696c(temp_r5);
            break;
        case 3:                                     /* switch 1 */
            var_r4 = func_020469fc();
            break;
        case 4:                                     /* switch 1 */
            var_r4 = func_02046a28(temp_r5);
            break;
        case 5:                                     /* switch 1 */
            var_r4 = func_02046a94(temp_r5);
            break;
        case 1:                                     /* switch 1 */
            var_r4 = func_02046aa8();
            break;
        }
    } else {
        switch (var_r4) {                           /* switch 2; irregular */
        case 15:                                    /* switch 2 */
            var_r4 = func_02046a94(temp_r5);
            break;
        case 11:                                    /* switch 2 */
            var_r4 = func_02046aa8();
            break;
        case 14:                                    /* switch 2 */
            func_0204b404();
            func_0204b30c();
            /* fallthrough */
        default:                                    /* switch 2 */
            var_r4 = 0xB;
            M2C_FIELD((temp_r5 + (M2C_FIELD(temp_r5, u8 *, 0xD13) * 4)), s8 *, 0x444) = 2;
            break;
        }
    }
    return var_r4;
}
