#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int M;
		int i;
		int fn[45];
		scanf("%d", &M);
		fn[0] = 1;
		fn[1] = 1;
		for (i = 2; i < M; i++)
		{
			fn[i] = fn[i - 1] + fn[i - 2];
		}
		printf("%d\n", fn[M - 1]);
	}
	return 0;

}