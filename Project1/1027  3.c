#include<stdio.h>
int main()
{
	float a, b;
	a = 100;
	int i;
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%f", &b);
		a += b;
	}
	printf("%.2f", a);
	return 0;
}