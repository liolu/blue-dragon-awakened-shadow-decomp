#include "engine.h"
#include "m2c.h"

M2C_UNK find_socket(M2C_UNK, M2C_UNK);
void tcp_send_rst(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void dt_syn_listen(M2C_UNK, M2C_UNK, M2C_UNK);

s32 find_specific_socket(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    u8 temp_r0_2;

    temp_r0 = find_socket(arg0, arg1);
    if (temp_r0 != 0) {
        temp_r0_2 = M2C_FIELD(temp_r0, u8 *, 8);
        if (temp_r0_2 == 1) {
            dt_syn_listen(arg0, arg1, temp_r0);
        } else if ((u32) (u8) (temp_r0_2 + 0xFD) <= 1U) {
            M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x28) - 1);
            dt_syn_listen(arg0, arg1, temp_r0);
        } else {
            tcp_send_rst(arg0, arg1, arg2, 0);
        }
        return 1;
    }
    return 0;
}
