#include<stdio.h>
int main()
{
	float a, b, sum;
	scanf_s("%f %f", &a, &b);
	sum = a + b;
	printf("%.2f", sum);
	return 0;
}