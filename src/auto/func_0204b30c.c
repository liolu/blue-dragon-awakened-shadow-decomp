#include "engine.h"
#include "m2c.h"

void func_02048cb8(void);
void func_0204a640(M2C_UNK);

extern M2C_UNK data_020f9768;
extern M2C_UNK data_020f9778;
extern M2C_UNK data_020f9794;
extern M2C_UNK data_020f97b4;
extern M2C_UNK data_0210e678;

void func_0204b30c(void) {
    M2C_UNK (*temp_r4)(M2C_UNK *, s32, M2C_UNK);
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), M2C_UNK(**)(M2C_UNK *, s32, M2C_UNK), 0x110C);
    if (M2C_FIELD(&data_0210e678, s32 *, 0x14) != 0) {
        func_0204a640(M2C_FIELD(&data_0210e678, s32 *, 0x14));
        temp_r4(&data_020f9768, M2C_FIELD(&data_0210e678, s32 *, 0x14), 0);
        M2C_FIELD(&data_0210e678, s32 *, 0x14) = 0;
    }
    func_02048cb8();
    if (M2C_FIELD(&data_0210e678, void **, 0) == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1114);
    if (temp_r1 != 0) {
        temp_r4(&data_020f9778, temp_r1, 0);
        M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1114) = 0;
    }
    temp_r1_2 = M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1118);
    if (temp_r1_2 != 0) {
        temp_r4(&data_020f9794, temp_r1_2, 0);
        M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1118) = 0;
    }
    temp_r4(&data_020f97b4, (s32) M2C_FIELD(&data_0210e678, void **, 0), 0);
    M2C_FIELD(&data_0210e678, void **, 0) = NULL;
}
