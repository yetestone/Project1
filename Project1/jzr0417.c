#include<stdio.h>

int main()
{
	double a[5],min;
	int i;
	char m, n;
	//printf("������5��ʵ��:\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%lf,", a + i);
		m=getchar();

	}
	scanf("%lf", a + i);
	min = a[0];
	for (i = 1; i < 5; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	printf("\n��С������%.2lf\n", min);

	return 0;


}