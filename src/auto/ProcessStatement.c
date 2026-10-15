#include "m2c.h"

s32 strncmp(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0206b724(s32, s32);                    /* extern */
M2C_UNK func_0206b7d4(s32, s32);                    /* extern */
M2C_UNK ProcessGetData(s32, s32);                    /* extern */
M2C_UNK ProcessSetData(s32, s32);                    /* extern */
extern M2C_UNK data_020fbbe8;
extern M2C_UNK data_020fbbf4;
extern M2C_UNK data_020fbc00;
extern M2C_UNK data_020fbc0c;

void ProcessStatement(s32 arg0, s32 arg1) {
    *(s8 *) (arg0 + arg1) = 0;
    if (strncmp(arg0, &data_020fbbe8, 8) == 0) {
        func_0206b724(arg0, arg1);
        return;
    }
    if (strncmp(arg0, &data_020fbbf4, 9) == 0) {
        func_0206b7d4(arg0, arg1);
        return;
    }
    if (strncmp(arg0, &data_020fbbf4, 9) == 0) {
        func_0206b7d4(arg0, arg1);
        return;
    }
    if (strncmp(arg0, &data_020fbc00, 8) == 0) {
        ProcessGetData(arg0, arg1);
        return;
    }
    if (strncmp(arg0, &data_020fbc0c, 8) != 0) {
        return;
    }
    ProcessSetData(arg0, arg1);
}