// Source: data/benchmarks/diffy_cav21_bench/sina3.c
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);

/*@
	requires N > 0;
	requires \separated(a+(0..N-1), b+(0..N-1));
*/
int main(int* a, int* b, int N)
{
	int i;
	int sum[1];

	sum[0] = 0;
	/* Loop_A */  for(i=0; i<N; i++)
	{
		a[i] = 1;
	}

	/* Loop_B */  for(i=0; i<N; i++)
	{
		b[i] = 1;
	}

	/* Loop_C */  for(i=0; i<N; i++)
	{
		sum[0] = sum[0] + a[i];
	}

	/* Loop_D */  for(i=0; i<N; i++)
	{
		a[i] = b[i] + sum[0];
	}

	/* Loop_E */  for(i=0; i<N; i++)
	{
		{;
//@ assert(a[i] == N + 1);
}

	}
	return 1;
}