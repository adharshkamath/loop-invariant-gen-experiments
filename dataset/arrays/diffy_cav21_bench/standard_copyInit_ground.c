// Source: data/benchmarks/diffy_cav21_bench/standard_copyInit_ground.c
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);

/*@
	requires N > 0;
	requires \separated(a+(0..N-1), b+(0..N-1));
*/
int main (int* a, int* b, int N) {
	int i = 0;
	/* Loop_A */  while ( i < N ) {
		a[i] = 42;
		i = i + 1;
	}

	/* Loop_B */  for ( i = 0 ; i < N ; i++ ) {
		b[i] = a[i];
	}

	int x;
	/* Loop_C */  for ( x = 0 ; x < N ; x++ ) {
		{;
//@ assert(  b[x] == 42  );
}

	}
	return 0;
}