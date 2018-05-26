#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int jiecheng(int a)
{
	int m;
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
	int i = 1;
	while(i!=1000)
	printf("%d\n", jiecheng(i++));
	system("pause");
}