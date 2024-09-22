// Source: data/benchmarks/tpdb/C_Integer/Stroeder_15/ChenFlurMukhopadhyay-SAS2012-Ex3.09_true-termination.c
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);
extern int unknown_int(void);

typedef enum {false, true} bool;

int main() {
    int x, y, z, oldx;
    x = unknown_int();
    y = unknown_int();
    z = unknown_int();
    while (x > 0 && x < y && x > 2*oldx) {
        oldx = x;
        x = unknown_int();
        y = z;
    }
    return 0;
}