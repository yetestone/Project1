#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, result;
	for (i=10,j=1;i>0;)
	{
		for (i--;j<=i;j++)
		{
			result = i*j;
			printf("%d*%d=%d  ", i, j, result);
		}
		printf("\n");
		j = 1;
	}
	system("pause");
}