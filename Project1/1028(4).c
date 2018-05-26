#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a,i=1;
	double sum=0;
	scanf_s("%d", &a);
	while (i <= 1000)
	{
		sum = a / i + sum;
		i++;

	}
	printf("sum=%lf", sum);
	system("pause");
}