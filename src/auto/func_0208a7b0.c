#include "m2c.h"
#include "engine.h"

M2C_UNK func_0208a680(M2C_UNK);
M2C_UNK func_0208a76c(void);
void func_020c0c58(M2C_UNK, M2C_UNK);
void func_020c0d54(M2C_UNK, M2C_UNK);
void func_ov000_02178550(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_ov000_021ee10c;
extern void *data_ov000_021ee5e8;

void func_0208a7b0(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    if ((u16) var_r0 == 0xFFFE) {
        var_r0 = func_0208a76c();
    }
    if ((u16) var_r0 == 0xFFFF) {
        return;
    }
    temp_r1 = var_r0 & 0xF000;
    if (temp_r1 < 0x8000) {
        if (((s32) (var_r0 & 0xF00) >> 8) == 4) {
            return;
        }
        temp_r0 = func_0208a680(var_r0);
        if (temp_r0 == 0) {
            return;
        }
        if (arg1 != 0) {
            func_020c0d54(temp_r0, 0x1000);
            return;
        }
        func_020c0c58(temp_r0, 0x1000);
        return;
    }
    if ((temp_r1 == 0xF000) && (var_r0 == 0xF003)) {
        if (arg1 == 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        func_ov000_02178550(data_ov000_021ee10c, M2C_FIELD(data_ov000_021ee5e8, s32 *, 0x2C), var_r2, 1);
    }
}
