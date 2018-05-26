#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int prime(int x)
{
	int i ;
	if (x == 1) return 0;
	for (i=2; i <= sqrt(x*1.0); i++)
	{
		if (x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int Inverse(int x)
{
	int res = 0;
	while (x != 0)
	{
		res = res * 10 + x % 10;
		x = x / 10;
	}
	return res;
}
main()
{
	int x, y, i;
	scanf("%d%d", &x, &y);
	for (i = x; i <= y; i++)
	{
		if (prime(i)&&prime(Inverse(i)))
			printf("%d\n", i);
	}
	system("pause");
}