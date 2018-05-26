#include<stdio.h>
main()
{
	int i,count=0;
	double a[10],ave=0;
	for (i = 0; i <= 9; i++)
	{
		scanf("%lf", &a[i]);
		ave += a[i];
	}
	ave /= 10;
	for (i = 0; i <= 9; i++)
	{
		if (a[i] > ave)
			count++;
	}
	printf("%d", count);
}