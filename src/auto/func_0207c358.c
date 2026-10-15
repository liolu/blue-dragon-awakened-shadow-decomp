#include "m2c.h"

M2C_UNK func_0207bc64(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207dd50(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0207c358(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg2 == 0) && (M2C_FIELD(arg0, s32 *, 0x40) == arg1) && (M2C_FIELD(arg0, s32 *, 0x44) == 0)) {
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xF4) != 0) && (arg2 == 0) && (M2C_FIELD(arg0, s32 *, 0x110) == arg1)) {
        return 1;
    }
    func_0207dd50(0, 0);
    M2C_FIELD(arg0, s32 *, 0xF4)  = 1;
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    switch (arg1) {                                 /* irregular */
        case 22:
        case 21:
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
            M2C_FIELD(arg0, s32 *, 0x10C) = 0;
            break;
        default:
            M2C_FIELD(arg0, s32 *, 0x10C) = 1;
            break;
    }
    func_0207bc64(arg0, 0);
    M2C_FIELD(arg0, s8 *, 0x108)  = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = arg3;
    return 1;
}
