#include "m2c.h"

s32 ArrayLength(s32);                             /* extern */
void *ArrayNth(s32, M2C_UNK);                  /* extern */
M2C_UNK ArrayDeleteAt(s32, M2C_UNK);                /* extern */
M2C_UNK gpiSendServerBuddyMessage(void **, s32, s32, s32);      /* extern */
M2C_UNK gpiDestroyPeer(void **, void *);             /* extern */

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
            if (ArrayLength(M2C_FIELD(arg1, s32 *, 0x3C)) != 0) {
                do {
                    temp_r0 = ArrayNth(M2C_FIELD(arg1, s32 *, 0x3C), 0);
                    temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x10);
                    if (temp_r2 < 0x64) {
                        gpiSendServerBuddyMessage(arg0, M2C_FIELD(arg1, s32 *, 0x10), temp_r2,
                                                  M2C_FIELD(temp_r0, s32 *, 0) + M2C_FIELD(temp_r0, s32 *, 0x14));
                    }
                    ArrayDeleteAt(M2C_FIELD(arg1, s32 *, 0x3C), 0);
                } while (ArrayLength(M2C_FIELD(arg1, s32 *, 0x3C)) != 0);
            }
            gpiDestroyPeer(arg0, arg1);
        }
    }
}
