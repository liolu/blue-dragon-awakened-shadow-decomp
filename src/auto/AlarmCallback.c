#include "m2c.h"

M2C_UNK OS_SendMessage(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK DC_InvalidateRange(s32, s32);                    /* extern */
extern M2C_UNK sIsThreadCreated;
extern M2C_UNK sMesgQ;
extern M2C_UNK sEffectInfoBuffer;

void AlarmCallback(void *arg0) {
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    void *temp_r1;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r2 = temp_r6 * M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC) + temp_r2;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10) + temp_r2;
    if (M2C_FIELD(&sIsThreadCreated, s32 *, 0) != 0) {
        temp_r3                                              = M2C_FIELD(&sIsThreadCreated, s32 *, 4) * 0x14;
        *((M2C_UNK *) ((s8 *) &sEffectInfoBuffer + temp_r3)) = arg0;
        temp_r1                                              = (M2C_UNK *) ((s8 *) &sEffectInfoBuffer + temp_r3);
        M2C_FIELD(temp_r1, s32 *, 4)                         = temp_r6;
        M2C_FIELD(temp_r1, s32 *, 8)                         = temp_r2;
        M2C_FIELD(temp_r1, s32 *, 0xC)                       = temp_r4;
        M2C_FIELD(temp_r1, s32 *, 0x10)                      = temp_r5;
        OS_SendMessage(&sMesgQ, temp_r1, 0);
        temp_r1_2                              = M2C_FIELD(&sIsThreadCreated, s32 *, 4) + 1;
        M2C_FIELD(&sIsThreadCreated, s32 *, 4) = temp_r1_2;
        if (temp_r1_2 >= 8) {
            M2C_FIELD(&sIsThreadCreated, s32 *, 4) = 0;
        }
    } else {
        DC_InvalidateRange(temp_r4, temp_r6);
        DC_InvalidateRange(temp_r5, temp_r6);
        M2C_FIELD(arg0, M2C_UNK(**)(s32, s32, s32, s32, s32), 0x34)(temp_r4, temp_r5, temp_r6, M2C_FIELD(arg0, s32 *, 8),
                                                                    M2C_FIELD(arg0, s32 *, 0x38));
    }
    temp_r1_3                    = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r1_3;
    if (temp_r1_3 >= (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
