#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void fun()
{
	double a, b, c,s,p;
	scanf_s("%le%le%le", &a, &b, &c);
	p = (a + b + c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f", s);
}
main()
{
	fun();
	system("pause");
}