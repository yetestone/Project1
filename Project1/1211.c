#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
	int a[3][5];
	int i, j,maxdata;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0, maxdata = a[i][0]; j < 5; j++)
		{
			maxdata = max(maxdata, a[i][j]);
		}
		printf("%.0d\n", maxdata);
	}
	return 0;
}