#include<stdio.h>
#include<stdlib.h>

main()
{
	int a, b, c,x1=0,x2=0,x3=0;
	scanf_s("%d%d%d", &a, &b, &c);
	x1 = (x1 = a > b ? a : b) > c ? x1 : c;
	x3 = (x3 = a < b ? a : b) < c ? x3 : c;
	x2 = a + b + c - x1 - x3;
	printf("%d %d %d",x1,x2,x3);
	system("pause");
	return 0;
}