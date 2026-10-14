#include "m2c.h"

s32 func_02026cac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020c4334(void *);                      /* extern */
extern M2C_UNK func_020c7058;

void func_020cade8(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xF4) == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = func_02026cac(3, 0x10, 0, &func_020c7058, 0);
        M2C_FIELD(arg0, s8 *, 0xF8) = 3;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 1;
    M2C_FIELD(arg0, s8 *, 0xF9) = 0;
    M2C_FIELD(arg0, s8 *, 0xFA) = 0;
    M2C_FIELD(arg0, s8 *, 0x258) = 0;
    M2C_FIELD(arg0, s8 *, 0x2F) = arg1;
    func_020c4334(arg0);
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s16 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0xFC) = 0;
    M2C_FIELD(arg0, s8 *, 0x149) = 0;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x164) = 0;
    M2C_FIELD(arg0, s8 *, 0x165) = 0;
    M2C_FIELD(arg0, s8 *, 0x166) = 0;
    M2C_FIELD(arg0, s8 *, 0x167) = 0;
    M2C_FIELD(arg0, s16 *, 0x100) = 0;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0;
    M2C_FIELD(arg0, s8 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s8 *, 0x148) = 0;
}
