#include "m2c.h"

s32 current_time();                                /* extern */
M2C_UNK SendReportPacket(void *);                      /* extern */
M2C_UNK NNCancel(s32);                         /* extern */

void StartReport(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    u32 var_ip;
    u8 temp_r0;
    u8 temp_r2;
    void *var_lr;
    void *var_r3;

    var_r3                       = arg3;
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    if (var_r3 != NULL) {
        var_lr = arg0 + 0x4C;
        var_ip = 4;
        do {
            temp_r2 = M2C_FIELD(var_r3, u8 *, 0);
            temp_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 2;
            var_ip -= 1;
            M2C_FIELD(var_lr, u8 *, 0) = temp_r2;
            M2C_FIELD(var_lr, u8 *, 1) = temp_r0;
            var_lr += 2;
        } while (var_ip != 0);
    }
    if ((u32) (arg1 - 1) <= 1U) {
        M2C_FIELD(arg0, s32 *, 0x10) = 3;
        M2C_FIELD(arg0, M2C_UNK(**)(s32, s32, void *, s32), 0x3C)(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x48),
                                                                  arg0 + 0x4C, M2C_FIELD(arg0, s32 *, 0x40));
        NNCancel(M2C_FIELD(arg0, s32 *, 8));
        return;
    }
    SendReportPacket(arg0);
    M2C_FIELD(arg0, s32 *, 0x10) = 5;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (current_time() + 0x3E8);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
}
