#include<stdio.h>
#include<stdlib.h>
#define N 10
main()
{
	int x[N + 1], i, j, k, t;
	printf("Input %d numbers:\n", N);
	for (i = 1; i < N; i++)
		scanf_s("%d", &x[i]);
	printf("\n");
	for (i = 1; i < N; i++)
	{	
		k = i;
		for(j=i+1;j<=N;j++)
			if (x[k] > x[j])
				k = j;
		if (k != i)
		{
		t = x[i];
		x[i] = x[k];
		x[k] = t;

		}
	}
	printf("The sorted numbers:\n");
	for (i = 1; i <= N; i++)
		printf("%d", x[i]);
	system("pause");
}