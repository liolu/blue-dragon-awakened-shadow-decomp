#include "m2c.h"

M2C_UNK MTX_Identity33_(void *);                      /* extern */
M2C_UNK MI_Copy36B(void *, void *);              /* extern */

void func_020d0bb4(s32 arg0, void *arg1, void *arg2) {
    if (M2C_FIELD(arg1, s32 *, 0) & 4) {
        M2C_FIELD(arg2, s32 *, 0x38) = 0;
        M2C_FIELD(arg2, s32 *, 0x34) = 0;
        M2C_FIELD(arg2, s32 *, 0x30) = 0;
    } else {
        M2C_FIELD(arg2, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
        M2C_FIELD(arg2, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x50);
        M2C_FIELD(arg2, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x54);
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 2) {
        MTX_Identity33_(arg2);
    } else {
        MI_Copy36B(arg1 + 0x28, arg2);
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 1) {
        M2C_FIELD(arg2, s32 *, 0x2C) = 0x1000;
        M2C_FIELD(arg2, s32 *, 0x28) = 0x1000;
        M2C_FIELD(arg2, s32 *, 0x24) = 0x1000;
        return;
    }
    M2C_FIELD(arg2, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg2, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg2, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
