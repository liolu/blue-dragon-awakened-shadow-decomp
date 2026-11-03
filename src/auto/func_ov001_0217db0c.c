#include "m2c.h"

typedef struct {
    u16 v;
    u16 p[3];
} E;
void func_ov001_0216e620(int, int, int, int);
void func_ov001_0216e564(int, int, int, int);
extern E data_ov001_02192d0e[];
extern E data_ov001_02192d10[];
extern E data_ov001_02192d12[];
extern E data_ov001_02192d14[];
extern u8 data_ov001_02196c0c;

void func_ov001_0217db0c(void) {
    int i = data_ov001_02196c0c;
    if (data_ov001_02196c0c < 4) {
        func_ov001_0216e620(data_ov001_02192d0e[i].v, data_ov001_02192d12[i].v, data_ov001_02192d10[i].v,
                            data_ov001_02192d14[i].v);
        return;
    }
    func_ov001_0216e564(0, data_ov001_02192d0e[i].v, data_ov001_02192d12[i].v, data_ov001_02192d10[i].v);
}
