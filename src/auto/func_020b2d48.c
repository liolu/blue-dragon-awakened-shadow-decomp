#include "m2c.h"

M2C_UNK func_02082408(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0209825c(void *);                      /* extern */
M2C_UNK func_020982ec(void *, void *);              /* extern */
M2C_UNK func_02098314(void *, void *);              /* extern */
s32 func_020983a8(void *);                          /* extern */
s32 func_020b2538(s32, s32);                        /* extern */
s32 func_020b2704(void *, void *);                  /* extern */
M2C_UNK func_020b2950(void *);                      /* extern */
M2C_UNK func_020b2964(void *);                      /* extern */
M2C_UNK func_020b2978(void *);                      /* extern */
s32 func_ov000_021aff24(void *);                    /* extern */
extern s32 data_02164e04;

void func_020b2d48(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = func_020b2538(arg0 + 0x40, arg0 + 0x28);
    if (temp_r0 == 0) {
        func_020b2950(arg0);
    }
    temp_r0_2 = func_020b2704(arg0 + 0xA4, arg0 + 0x34);
    if (temp_r0_2 == 0) {
        func_020b2964(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x110) != 0) && (func_ov000_021aff24(arg0 + 0xE8) != 0)) {
        func_0209825c(arg0 + 0xE8);
        func_020982ec(arg0 + 0xE8, arg0 + 0xF8);
        func_02098314(arg0 + 0xE8, arg0 + 0x104);
        func_02082408(data_02164e04, 0x850A, 0);
        M2C_FIELD(arg0, u8 *, 0x110) = 0U;
    }
    temp_r0_3 = func_020983a8(arg0 + 0xE8);
    if (temp_r0_3 == 0) {
        func_020b2978(arg0);
    }
    if ((temp_r0 == 0) && (temp_r0_2 == 0) && (temp_r0_3 == 0)) {
        M2C_FIELD(arg0, s8 *, 0x20) = 0;
    }
}
