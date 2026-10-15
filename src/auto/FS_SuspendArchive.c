#include "m2c.h"

M2C_UNK OS_SleepThread(void *);                      /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */

s32 FS_SuspendArchive(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r5;

    temp_r4 = OS_DisableInterrupts();
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x10) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x1C);
        if (var_r0_2 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 0x40);
            do {
                OS_SleepThread(arg0 + 0x14);
                if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x40) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
            } while (var_r0_3 != 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 8);
        }
    }
    OS_RestoreInterrupts(temp_r4);
    return var_r5;
}
