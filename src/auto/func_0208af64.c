#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208a680(M2C_UNK);
M2C_UNK func_0208a76c(void);
void func_020c0794(M2C_UNK, M2C_UNK);
void func_ov000_0219cf50(M2C_UNK, M2C_UNK, M2C_UNK);
void func_ov000_0219ec20(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02165788;
extern s32 data_ov000_021ee5e8;

void func_0208af64(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r0;
    void *temp_r1_2;

    var_r0 = arg0;
    if (arg1 == 0) {
        return;
    }
    if ((u16) var_r0 == 0xFFFE) {
        var_r0 = func_0208a76c();
    }
    if ((u16) var_r0 == 0xFFFF) {
        return;
    }
    temp_r1 = var_r0 & 0xF000;
    if (temp_r1 < 0x8000) {
        if (((s32) (var_r0 & 0xF00) >> 8) == 4) {
            func_ov000_0219cf50(data_ov000_021ee5e8 + 0x414, var_r0 & 0xF, arg1);
            return;
        }
        func_020c0794(func_0208a680(var_r0), arg1);
        return;
    }
    if (temp_r1 != 0xF000) {
        return;
    }
    if (var_r0 == 0xF004) {
        func_ov000_0219ec20(data_ov000_021ee5e8 + 0xAC, arg1);
        return;
    }
    temp_r1_2                         = *((M2C_UNK *) ((s8 *) &data_02165788 + ((var_r0 & 1) * 0xC)));
    M2C_FIELD(temp_r1_2, s32 *, 0x6C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r1_2, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r1_2, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
