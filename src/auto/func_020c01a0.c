#include "engine.h"
#include "m2c.h"

void func_020bd0c4(M2C_UNK, M2C_UNK);
void func_020bd0f0(M2C_UNK, M2C_UNK);
void ACSSBADX_DestroyAdxt(M2C_UNK);
void func_020c0610(M2C_UNK, M2C_UNK);
void func_020c0794(M2C_UNK, M2C_UNK);
void func_020c0884(M2C_UNK, M2C_UNK);
void func_020c0974(M2C_UNK, M2C_UNK);
void func_020c0a5c(M2C_UNK, M2C_UNK);
void func_020c0ac4(M2C_UNK, M2C_UNK);
void func_020c0b2c(M2C_UNK, M2C_UNK);
void func_020c0b94(M2C_UNK, M2C_UNK);
M2C_UNK func_020c3558(M2C_UNK);
M2C_UNK func_020c357c(M2C_UNK);
void func_020c370c(M2C_UNK, M2C_UNK);
void func_ov000_02178550(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_ov000_021ee10c;

void func_020c01a0(s32 arg0) {
    s32 temp_r4;
    s32 temp_r6;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r1, u16 *, 0x34) & 1) {
        func_020c0610(arg0, (s32) temp_r1);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_2, u16 *, 0x34) & 2) {
        func_020c0794(arg0, (s32) (temp_r1_2 + 0xC));
    }
    temp_r1_3 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_3, u16 *, 0x34) & 4) {
        func_020c0884(arg0, (s32) (temp_r1_3 + 0x18));
    }
    temp_r1_4 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_4, u16 *, 0x34) & 8) {
        func_020c0974(arg0, (s32) (temp_r1_4 + 0x26));
    }
    temp_r1_5 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_5, u16 *, 0x34) & 0x10) {
        func_020c0a5c(arg0, (s32) (temp_r1_5 + 0x24));
    }
    temp_r1_6 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_6, u16 *, 0x34) & 0x20) {
        func_020c0ac4(arg0, (s32) (temp_r1_6 + 0x28));
    }
    temp_r1_7 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_7, u16 *, 0x34) & 0x40) {
        func_020c0b2c(arg0, (s32) (temp_r1_7 + 0x2A));
    }
    temp_r1_8 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_8, u16 *, 0x34) & 0x80) {
        func_020c0b94(arg0, (s32) M2C_FIELD(temp_r1_8, u8 *, 0x2C));
    }
    temp_r1_9 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r1_9, u16 *, 0x34) & 0x100) {
        temp_r0 = M2C_FIELD(arg0, void **, 0xC);
        temp_r4 = M2C_FIELD(temp_r0, s32 *, 0xC);
        if (M2C_FIELD(temp_r1_9, s32 *, 0x30) & 0x800) {
            temp_r6 = data_ov000_021ee10c;
            func_ov000_02178550(temp_r6, func_020c357c((s32) temp_r0), 1, 2);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30) & 0x100) {
            func_020bd0f0(temp_r4, 0);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30) & 0x400) {
            func_020bd0c4(temp_r4, 0);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30) & 0x1000) {
            func_020c370c((s32) M2C_FIELD(arg0, void **, 0xC), 0);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30) & 0x40000) {
            temp_r0_2                          = (void *) func_020c3558((s32) M2C_FIELD(arg0, void **, 0xC));
            M2C_FIELD(temp_r0_2, u16 *, 0x438) = (u16) (M2C_FIELD(temp_r0_2, u16 *, 0x438) & ~8);
        }
        M2C_FIELD(arg0, s32 *, 0x78) =
            (s32) (M2C_FIELD(arg0, s32 *, 0x78) | M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30));
    }
    ACSSBADX_DestroyAdxt(arg0);
}
