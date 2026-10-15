#include "m2c.h"

s32 atoi();                                /* extern */
void *ArrayNth(s32, s32);                      /* extern */
s32 value_for_key_safe(M2C_UNK, M2C_UNK *);              /* extern */
s32 FindRequest(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK CallReqCallback(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_020fbba4;
extern M2C_UNK data_020fbbac;
extern M2C_UNK data_020fbbb0;
extern M2C_UNK serverreqs;

void func_0206b724(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    value_for_key_safe(arg0, &data_020fbba4);
    temp_r5 = atoi();
    value_for_key_safe(arg0, &data_020fbbac);
    temp_r4 = atoi();
    temp_r6 = value_for_key_safe(arg0, &data_020fbbb0);
    temp_r0 = FindRequest(0, temp_r4, 0);
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(ArrayNth(M2C_FIELD(&serverreqs, s32 *, 0x14), temp_r0), s32 *, 8) = temp_r5;
    if (temp_r5 > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    CallReqCallback(temp_r0, var_r1, 0, temp_r6, 0);
}
