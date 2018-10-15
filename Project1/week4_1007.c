#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int M;
		int i;
		long long a[50] = {1,3,5};
		scanf("%d", &M);

		for (i = 3; i < M; i++)
		{
			a[i] = a[i - 1] + a[i - 2] * 2;
		}
		printf("%lld\n", a[M-1]);
	}
	return 0;

}