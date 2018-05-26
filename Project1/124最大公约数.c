#include<stdio.h>
long gongyue(long m, long n)
{
	if (n == 0)
		return m;
	return gongyue(n, m%n);
}
main()
{
	long m, n;
	scanf("%ld %ld", &m, &n);
	printf("%ld", gongyue(m,n));
}
/*
#include <stdio.h>  
int maxgongyueshu(int m, int n)
{
	if (n == 0)
		return m;
	else
		return maxgongyueshu(n, m%n);
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d", maxgongyueshu(m, n));
	return 0;
}
#include<stdio.h>
int gongyue(int m, int n)
{
	if (n == 0)
		return m;
	else
		return gongyue(n, m%n);
}
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d", gongyue(n, m));
	return 0;
}
*/