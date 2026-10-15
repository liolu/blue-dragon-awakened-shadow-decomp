#include "m2c.h"

s32 current_time();                                /* extern */
M2C_UNK SendPingPacket();                            /* extern */

void ProcessPingPacket(void *arg0, void *arg1, void *arg2) {
    u16 temp_r2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) < 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 4);
    temp_r2                      = M2C_FIELD(arg2, u16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) ((u8) ((s32) temp_r2 >> 8) | ((temp_r2 << 8) & 0xFF00));
    M2C_FIELD(arg0, s8 *, 0x36)  = 1;
    if (M2C_FIELD(arg1, u8 *, 0x12) == 0) {
        SendPingPacket(arg0);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
        if (M2C_FIELD(arg0, u8 *, 0x37) == 0) {
            SendPingPacket(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 3;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (current_time() + 0x1388);
        return;
    }
    if (M2C_FIELD(arg1, u8 *, 0x13) != 0) {
        return;
    }
    SendPingPacket(arg0);
}
