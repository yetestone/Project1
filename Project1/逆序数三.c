#include<stdio.h>
int reverse(int x)
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
	int x;
	scanf("%d", &x);
	printf("%d", reverse(x));
}