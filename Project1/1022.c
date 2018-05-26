#include<stdio.h>
#include<stdlib.h>
int maxcount(int a,int b)
{
	int i=0;
	if (a > b)
		i++;
	return i;
}
int main()
{
	int M, N, k, g;
	scanf_s("%d%d\n", &M, &N);
	if (M > 0 && M < 1e5&&N>1 && N < 1e3)
	{
		for (k = 1, g = 0; k <= N; k++)
		{
			int a1;
			scanf_s("%d", &a1);
			if (a1 <= 1e5)
				g = maxcount(M, a1) + g;
			else
				continue;
		}
	}
	printf("%d", g);
	system("pause");

	return 0;
}