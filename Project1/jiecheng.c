#include<stdio.h>

#include<stdlib.h>
int jiecheng(int a)
{
	double m;
	if (a == 0)
	{
		m = 1;
		return m;
	}
	m = jiecheng(a - 1)*a;
	return m;
}
main()
{
	double i,count=0;
	for (i = 1; 1; i++)
	{
		printf("%d\n", jiecheng(i));
		count++;
	}
	printf("%f", count);
	system("pause");
}