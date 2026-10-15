#include "m2c.h"

s32 strlen(void *);                          /* extern */
M2C_UNK strcpy(M2C_UNK *, s32);              /* extern */
M2C_UNK gs_encode(M2C_UNK *, s32, void *);      /* extern */
M2C_UNK gs_encrypt(s32, s32, M2C_UNK *, s32);    /* extern */

void compute_challenge_response(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    u8 sp0[68];

    if (arg3 < 1) {
        return;
    }
    if (arg3 > 0x41) {
        return;
    }
    if (*(s8 *) (arg2 + (arg3 - 1)) != 0) {
        return;
    }
    strcpy(sp0, arg2);
    gs_encrypt(arg0 + 0x44, strlen(arg0 + 0x44), sp0, arg3 - 1);
    gs_encode(sp0, arg3 - 1, arg1 + M2C_FIELD(arg1, s32 *, 0x578));
    M2C_FIELD(arg1, s32 *, 0x578) = (s32) (M2C_FIELD(arg1, s32 *, 0x578) + (strlen(arg1 + M2C_FIELD(arg1, s32 *, 0x578)) + 1));
}