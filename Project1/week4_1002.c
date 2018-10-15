#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int a,b;
		int i,m;
		long long fn[55];
		scanf("%d %d", &a,&b);
		m = b - a;
		fn[0] = 1;
		fn[1] = 2;
		for (i = 2; i < m; i++)
		{
			fn[i] = fn[i - 1] + fn[i - 2];
		}
		printf("%lld\n", fn[m-1]);
	}
	return 0;

}