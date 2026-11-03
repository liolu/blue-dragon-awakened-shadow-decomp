#include "m2c.h"

s32 func_0204580c(void);
void func_0204b404(void);
void func_0204b30c(void);
s32 func_0204589c(void);

s32 func_02045784(u8 *p) {
    s32 r;

    if (p[0] <= 10) {
        r = func_0204580c();
        if (r == 1) {
            p[0] = 0;
            return 1;
        }
        if (r == -1) {
            p[0] = 18;
            return 1;
        }
    } else {
        if (p[0] == 14) {
            func_0204b404();
            func_0204b30c();
            p[0] = 12;
        } else if (p[0] < 18) {
            r = func_0204589c();
            if (r == 1) {
                p[0] = 10;
            }
        }
    }
    return 0;
}
