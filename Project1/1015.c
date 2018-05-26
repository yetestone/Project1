#include<stdio.h>
#include<stdlib.h>
int main()
{

	double a, b,sum;
	scanf_s("%lf%lf", &a, &b);
	sum = a*a + b*b;
	printf("%f",sum);
	system("pause");
	return 0;

}