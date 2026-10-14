#include "m2c.h"

M2C_UNK func_02080444();                            /* extern */
M2C_UNK func_02080584(s8 *);                        /* extern */
M2C_UNK func_020805ac(s8 *, s32);                   /* extern */
M2C_UNK func_020805b4(s8 *, s8, s32);               /* extern */
extern s8 *data_02110554;

s32 func_02087aa8(void *arg0) {
    s32 temp_r5;
    s8 temp_r4;

    if (data_02110554 == NULL) {
        func_02080444();
    }
    temp_r4 = *data_02110554;
    if (temp_r4 == M2C_FIELD(arg0, s32 *, 0)) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 4);
        if (data_02110554 == NULL) {
            func_02080444();
        }
        func_020805ac(data_02110554, temp_r5);
        if (temp_r5 == 0x1869F) {
            if (data_02110554 == NULL) {
                func_02080444();
            }
            func_02080584(data_02110554);
        } else {
            if (data_02110554 == NULL) {
                func_02080444();
            }
            func_020805b4(data_02110554, temp_r4, temp_r5);
        }
    } else {
        if (data_02110554 == NULL) {
            func_02080444();
        }
        func_020805b4(data_02110554, (s8) M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}
