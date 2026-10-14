#include "m2c.h"
#include "engine.h"

void func_02027390(M2C_UNK, M2C_UNK);
M2C_UNK func_02027408(M2C_UNK, M2C_UNK);
M2C_UNK func_02027da0(M2C_UNK, M2C_UNK);
void func_02027df0(M2C_UNK, M2C_UNK);
void func_02033b54(M2C_UNK);
M2C_UNK func_02033ddc(M2C_UNK);
void func_02033e18(void);

void func_02033cc4(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        func_02033b54(arg0);
        return;
    }
    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC)) {
        do {
            temp_r0 = func_02027408(arg0 + 4, 0);
            var_r8 = func_02027408(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r8, M2C_UNK (**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r8 + 0x20, M2C_FIELD(var_r8, s32 *, 8), M2C_FIELD(var_r8, s32 *, 0x10), M2C_FIELD(var_r8, s32 *, 0x14));
                        var_r7 = 1;
                    }
                    var_r8 = func_02027408(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            func_02027390(arg0 + 4, temp_r0);
        } while (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC));
    }
    func_02027df0(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (var_r7 != 0) {
        func_02033e18();
    }
    func_02027da0(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC));
    func_02033ddc(arg0);
}
