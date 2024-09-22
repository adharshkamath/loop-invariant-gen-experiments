// Source: data/benchmarks/diffy_cav21_bench/condnl1.c
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);

int N;

/*@
requires N > 0;
requires \separated(a+(0..N-1), c+(0..N-1));
*/
int main(int* a, int* c, int N)
{
	int i;
	int sum[1];

	sum[0] = 0;
	/* Loop_A */  for(i=0; i<N; i++)
	{
		sum[0] = sum[0] + i + 1;
	}

	/* Loop_B */  for(i=0; i<N; i++)
	{
		a[i] = N*(N+1)/2;
	}

	/* Loop_C */  for(i=0; i<N; i++)
	{
		if(i != 2 && N % (i-2) == 1)
		{
			c[i] = sum[0];
		} else {
			c[i] = a[i];
		}
	}

	/* Loop_D */  for(i=0; i<N; i++)
	{
		{;
//@ assert(c[i] == N*(N+1)/2);
}
 
	}
	return 1;
}