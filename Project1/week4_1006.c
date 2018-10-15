#include<stdio.h>
int main()
{
	int N;
	int i;
	long long fn[55] = { 1,2,3,4,6 };
	while (scanf("%d", &N) != EOF)
	{
		if (N == 0) break;
		for (i = 5; i < N; i++)
		{
			fn[i] = fn[i - 1] + fn[i - 3] ;
		}
		printf("%lld\n", fn[N - 1]);
	}
	return 0;

}