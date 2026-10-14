#include "m2c.h"

s32 func_0205b8ac(s32);                             /* extern */
void *func_0205b8b4(s32, M2C_UNK);                  /* extern */
M2C_UNK func_0205ba28(s32, M2C_UNK);                /* extern */
M2C_UNK func_02060a9c(void **, s32, s32, s32);      /* extern */
M2C_UNK func_02066e38(void **, void *);             /* extern */

void func_02066e84(void **arg0, void *arg1) {
    s32 temp_r2;
    void *temp_r0;
    void *temp_r1;
    void *var_r0;
    void *var_r2;

    temp_r1 = *arg0;
    if (arg1 != NULL) {
        var_r2 = M2C_FIELD(temp_r1, void **, 0x5D4);
        if (var_r2 != NULL) {
            if (var_r2 == arg1) {
                M2C_FIELD(temp_r1, void **, 0x5D4) = (void *) M2C_FIELD(arg1, void **, 0x4C);
                goto block_11;
            }
            var_r0 = M2C_FIELD(var_r2, void **, 0x4C);
            if (var_r0 != arg1) {
loop_7:
                if (var_r0 == NULL) {
                    return;
                }
                var_r2 = var_r0;
                var_r0 = M2C_FIELD(var_r0, void **, 0x4C);
                if (var_r0 == arg1) {
                    goto block_10;
                }
                goto loop_7;
            }
block_10:
            M2C_FIELD(var_r2, void **, 0x4C) = (void *) M2C_FIELD(arg1, void **, 0x4C);
block_11:
            if (func_0205b8ac(M2C_FIELD(arg1, s32 *, 0x3C)) != 0) {
                do {
                    temp_r0 = func_0205b8b4(M2C_FIELD(arg1, s32 *, 0x3C), 0);
                    temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x10);
                    if (temp_r2 < 0x64) {
                        func_02060a9c(arg0, M2C_FIELD(arg1, s32 *, 0x10), temp_r2, M2C_FIELD(temp_r0, s32 *, 0) + M2C_FIELD(temp_r0, s32 *, 0x14));
                    }
                    func_0205ba28(M2C_FIELD(arg1, s32 *, 0x3C), 0);
                } while (func_0205b8ac(M2C_FIELD(arg1, s32 *, 0x3C)) != 0);
            }
            func_02066e38(arg0, arg1);
        }
    }
}
