#include<stdio.h>
void convert(int n)
{
	int i;
	if ((i = n / 10) != 0)
		convert(i);
	putchar(n % 10 + '0');
}
main()
{
	int a,n=1;
	scanf_s("%d", &a);
	if (a < 0)
	{
		putchar('-');
		a = -a;
	}
	convert(a);
}