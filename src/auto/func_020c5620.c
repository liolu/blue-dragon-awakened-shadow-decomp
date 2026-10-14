#include "m2c.h"

s32 func_020bec48(s32);                             /* extern */
s32 func_020bec54(s32);                             /* extern */
extern M2C_UNK data_ov000_021f4950;

s32 func_020c5620(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    u16 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r2 == NULL) {
        return 0;
    }
    if (M2C_FIELD(&data_ov000_021f4950, u8 *, 0x30) != 0) {
        return 0;
    }
    if (M2C_FIELD(&data_ov000_021f4950, s32 *, 0x40) != 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(temp_r2, s32 *, 8) <= 0) {
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r2, u16 *, 0x88);
    if (((s32) temp_r1 >> 4) & 1) {
        return 0;
    }
    if (((s32) temp_r1 >> 5) & 1) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x30) & 0x100) {
        return 0;
    }
    temp_r5 = func_020bec48(M2C_FIELD(arg0, s32 *, 8));
    temp_r0 = func_020bec54(M2C_FIELD(arg0, s32 *, 8));
    if (temp_r5 == 8) {
        return 0;
    }
    if (temp_r0 != 8) {
        return 1;
    }
    return 0;
}
