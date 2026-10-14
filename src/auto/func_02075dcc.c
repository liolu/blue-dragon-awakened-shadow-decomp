#include "m2c.h"

u32 func_0201a164(s32);                             /* extern */
s32 func_0201a3dc(s32, s32, u32);                   /* extern */
M2C_UNK func_020765d4(void *);                      /* extern */
M2C_UNK func_02076d0c(void *, s32);                 /* extern */
extern s32 data_020fd11c;
extern s32 data_0210fd54;

void func_02075dcc(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r5 > 0) {
        temp_r6 = data_020fd11c;
        if ((u32) temp_r5 > func_0201a164(temp_r6)) {
            temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x7C);
            temp_r7 = data_020fd11c;
            if (func_0201a3dc(temp_r5_2, temp_r7, func_0201a164(temp_r7)) == 0) {
                func_02076d0c(arg0, temp_r5_2 + func_0201a164(temp_r6));
                M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 5, data_0210fd54, M2C_FIELD(arg0, s32 *, 0x494));
            }
        }
    }
    M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 4, data_0210fd54, M2C_FIELD(arg0, s32 *, 0x494));
    func_020765d4(arg0);
}
