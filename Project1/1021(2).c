#include<stdio.h>
#include<stdlib.h>
int gysum(int a)
{
	int k,sum;
	for (k=1,sum=0;k<a;k++)
	{
		if (a%k!=0)
			continue;
		else
		sum += k;
	}
	return sum;
}
int main()
{
	int b;
	scanf_s("%d",&b);
	for (;b!=0 ; b--)
	{
		if (gysum(b) == b)
			break;
	}
	printf("%d", b);
	system("pause");
	return 0;
}