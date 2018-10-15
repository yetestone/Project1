#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int M;
		int i;
		long long b,a;
		scanf("%d", &M);
		if (M == 0) printf("0\n");
		a = 1;
		//b = 7;
		for (i = 1; i <= M; i++)
		{
			b = a + 4*(i-1)+1;
			a = b;
		}
		printf("%lld\n", b);
	}
	return 0;

}