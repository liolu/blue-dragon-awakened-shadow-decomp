#include "m2c.h"

s32 strncmp(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 strstr(M2C_UNK, M2C_UNK *);              /* extern */
s32 atoi(M2C_UNK *);                       /* extern */
M2C_UNK gpiCallErrorCallback(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
s32 gpiValueForKey(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020fbac4;
extern M2C_UNK data_020fbacc;
extern M2C_UNK data_020fbad4;
extern M2C_UNK data_020fbae0;

s32 gpiCheckForError(M2C_UNK **arg0, M2C_UNK arg1, s32 arg2) {
    u8 sp0[16];
    M2C_UNK *temp_r4;
    M2C_UNK var_r2;
    s32 var_r0;

    temp_r4 = *arg0;
    if (strncmp(arg1, &data_020fbac4, 7) == 0) {
        if (gpiValueForKey(arg1, &data_020fbacc, sp0, 0x10) != 0) {
            M2C_FIELD(temp_r4, s32 *, 0x5B8) = atoi(sp0);
        }
        if (gpiValueForKey(arg1, &data_020fbad4, temp_r4, 0x100) == 0) {
            M2C_FIELD(temp_r4, s8 *, 0) = 0;
        }
        if (arg2 != 0) {
            if (strstr(arg1, &data_020fbae0) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
            gpiCallErrorCallback(arg0, 4, var_r2);
        }
        return 1;
    }
    return 0;
}
