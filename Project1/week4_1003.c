#include<stdio.h>
int main()
{
	int N;
	int i;
	long long fn[55] = {3,6,6};
	while (scanf("%d", &N)!=EOF)
	{	
		for (i = 3; i < N; i++)
		{
			fn[i] = fn[i - 1] + fn[i - 2]*2;
		}
		printf("%lld\n", fn[N - 1]);
	}
	return 0;

}