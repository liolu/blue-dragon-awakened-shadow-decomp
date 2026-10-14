#include "m2c.h"
#include "engine.h"

void func_020b3e40(M2C_UNK, M2C_UNK);
void func_ov000_021783d8(M2C_UNK, M2C_UNK);
void func_ov000_021a377c(M2C_UNK, M2C_UNK);

extern s32 data_021670a4;
extern s32 data_ov000_021ee10c;
extern s32 data_ov000_021ee6a0;

void func_020b3fa8(void) {
    s32 temp_r1_2;
    s32 var_r4;
    s32 var_r5;
    void *temp_r1;

    if (data_021670a4 == 0) {
        return;
    }
    var_r4 = 0;
    var_r5 = 0;
    do {
        temp_r1 = data_021670a4 + var_r5;
        if (M2C_FIELD(temp_r1, s8 *, 0x50) == 0) {
            temp_r1_2 = M2C_FIELD(temp_r1, s32 *, 0x54);
            if (temp_r1_2 != -1) {
                func_ov000_021a377c(data_ov000_021ee6a0, temp_r1_2);
            }
        }
        func_ov000_021783d8(data_ov000_021ee10c, data_021670a4 + 0x2C + var_r5);
        func_020b3e40(data_021670a4, var_r4);
        var_r4 += 1;
        var_r5 += 0x30;
    } while (var_r4 < 0x18);
}
