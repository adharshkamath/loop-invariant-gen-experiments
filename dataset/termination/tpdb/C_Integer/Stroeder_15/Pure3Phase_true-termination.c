// Source: data/benchmarks/tpdb/C_Integer/Stroeder_15/Pure3Phase_true-termination.c
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);
extern int unknown_int(void);

typedef enum {false, true} bool;

int main()
{
    int x, y, z;
    x = unknown_int();
    y = unknown_int();
    z = unknown_int();
	while (x >= 0) {
		if (unknown_int() != 0) {
			x = x + y;
		} else {
			x = x + z;
		}
		y = y + z;
		z = z - 1;
	}
	return 0;
}