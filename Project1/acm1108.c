#include<stdio.h>
long gongyue(long m, long n)//շת������ؿ���m��n��С��ϵ����ע��Ϊ����ʱ��
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
