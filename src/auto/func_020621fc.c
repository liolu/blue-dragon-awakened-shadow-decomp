#include "m2c.h"

typedef struct N {
    u8 p0[0xc];
    s32 f0c;
    s32 f10;
    struct N *next;
} N;
typedef struct {
    u8 p0[0x5D8];
    N *head;
    N *tail;
} H;

extern void func_02061f64(H **, N *);

s32 func_020621fc(H **arg0, s32 arg1) {
    H *temp_r8;
    N *var_r7;
    N *var_r6;
    N *var_r5;
    N *var_r1;
    N *temp_r4;
    N *temp_r5;

    temp_r8 = *arg0;
    if (arg1 != 0) {
        var_r7        = temp_r8->head;
        var_r6        = temp_r8->tail;
        var_r5        = NULL;
        temp_r8->head = NULL;
        var_r1        = var_r7;
        temp_r8->tail = NULL;
        if (var_r7 != NULL) {
            do {
                temp_r4 = var_r1->next;
                if ((var_r1->f10 == arg1) || (var_r1->f0c == 1)) {
                    if (var_r5 != NULL) {
                        var_r5->next = temp_r4;
                    } else {
                        var_r7 = temp_r4;
                    }
                    if (var_r6 == var_r1) {
                        var_r6 = var_r5;
                    }
                    func_02061f64(arg0, var_r1);
                } else {
                    var_r5 = var_r1;
                }
                var_r1 = temp_r4;
            } while (temp_r4 != NULL);
        }
        if (temp_r8->head != NULL) {
            temp_r8->tail->next = var_r7;
            temp_r8->tail       = var_r6;
        } else {
            temp_r8->head = var_r7;
            temp_r8->tail = var_r6;
        }
        return 0;
    }
    var_r1 = temp_r8->head;
    if (var_r1 != NULL) {
        do {
            temp_r8->head = NULL;
            temp_r8->tail = NULL;
            if (var_r1 != NULL) {
                do {
                    temp_r5 = var_r1->next;
                    func_02061f64(arg0, var_r1);
                    var_r1 = temp_r5;
                } while (temp_r5 != NULL);
            }
            var_r1 = temp_r8->head;
        } while (var_r1 != NULL);
    }
    return 0;
}
