#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a[10]
	//	= {50,60,70,80,90,90,110,120,130,140}
	, i = 0, k = 0;
	int money
		//=100
		,sum=0,mindata;
	scanf("%d", &money);
	for (; i <= 9; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
		a[i] = fabs(a[i] - money);
	mindata = a[0];
	for (i = 1; i <= 9; i++)
	{
		mindata = mindata < a[i] ? mindata : a[i];
	}	
	for (i = 0; i < 10; i++)
	{
		if (mindata == a[i])
			sum++;
	}
	for (i = 0; i <= 9; i++)
	{
		if (k<sum-1&&a[i] == mindata)
		{
			printf("%d ", i);
			k++;
			continue;
		}
		if(k==sum-1&& a[i] == mindata)
		{
				printf("%d", i);
				break;
		}
	}
	printf("\n");
	printf("%.1f", money*1.0 / sum);
	system("pause");
}