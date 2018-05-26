#include<stdio.h>
int sum(int n);
int main()
{
	int a;
	while (scanf("%d",&a) != EOF)
	{
		printf("%d\n", sum(a));
	}
	return 0;
}
int sum(int n)
{
	return n!=1?sum(n - 1) + n:1;
}