#include "m2c.h"

void func_020d450c(s32 arg0, s32 arg1, void *arg2) {
    s16 temp_ip;
    s16 temp_ip_2;
    s16 temp_ip_3;
    s16 temp_ip_4;
    s16 temp_ip_5;
    s16 temp_r2;
    s32 temp_r3;

    if (arg1 < 0) {
        return;
    }
    if (arg1 > 5) {
        return;
    }
    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 8);
    if ((temp_r3 != 0) && (temp_r3 != 1)) {
        return;
    }
    if (temp_r3 == 0) {
        return;
    }
    temp_ip = M2C_FIELD(arg2, s16 *, 0);
    if ((s32) temp_ip > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x38) = temp_ip;
    }
    temp_ip_2 = M2C_FIELD(arg2, s16 *, 2);
    if ((s32) temp_ip_2 > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x3A) = temp_ip_2;
    }
    temp_ip_3 = M2C_FIELD(arg2, s16 *, 4);
    if ((s32) temp_ip_3 > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x3C) = temp_ip_3;
    }
    temp_ip_4 = M2C_FIELD(arg2, s16 *, 6);
    if ((s32) temp_ip_4 > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x3E) = temp_ip_4;
    }
    temp_ip_5 = M2C_FIELD(arg2, s16 *, 8);
    if ((s32) temp_ip_5 > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x40) = temp_ip_5;
    }
    temp_r2 = M2C_FIELD(arg2, s16 *, 0xA);
    if ((s32) temp_r2 > 0) {
        M2C_FIELD((arg0 + (arg1 << 5)), s16 *, 0x42) = temp_r2;
    }
}
