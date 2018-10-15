#include<stdio.h>

int main()
{
	int a, b, n;
	int f[60];
	f[1] = 1;
	f[2] = 1;
	while (scanf("%d %d %d", &a, &b, &n) != EOF)
	{
		int t = 3;
		if (a == 0 && b == 0 && n == 0)
			break;
		n = n % 49;//xunhuan
		for (;t<=n;t++)
		{
			f[t] = (a*f[t - 1] + b * f[t - 2]) % 7;
			
		}
//		printf("/*************/\n");
		printf("%d\n", f[n]);
	}

	return 0;


}