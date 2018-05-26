/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b;
	a = 100;
	int i;
	for (i=1;i<=10;i++)
	{
		scanf_s("%f", &b);
		a += b;
	}
	printf("%.2f", a);
	system("pause");
	return 0;


}

#include<stdio.h>
int main()
{
	double x, max;
	int i;
	scanf("%lf", &x);
	max = x;
	for (i = 1; i <= 9; i++)
	{
		scanf("%lf", &x);
		if (x > max)
			max = x;

	}
	printf("%.2f", max);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	double a;
	int i;
	scanf_s("%lf", &a);
	for (i = 1; i <= 10; i++)
	{
		double b;
		scanf_s("%lf", &b);
		if (a >= b)
			continue;
		else
		{
			printf("%d", i);
			return 0;
			
		}
	}
	printf("0");
	return 0;
}
