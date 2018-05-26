#include<stdio.h>
long gongyue(long m, long n)//辗转相除不必考虑m、n大小关系。（注意为负数时）
{
	if (n == 0)
		return m;
	return gongyue(n, m%n);
}
int gongbei(int a, int b)
{
	return a * b / gongyue(a, b);
}
int main()
{
	int a, b;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		printf("%d\n", gongbei(a, b));
	}
	return 0;
}
