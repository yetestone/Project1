#include<stdio.h>
void change(int *status);
int main()
{
	int a[1001] = {0}, N, K;
	int i,j;
	int flag;
	scanf("%d\n%d", &N,&K);
	for (i = 1; i <= N; i++)
		a[i] = 1;
	for (i = 1; i <= K; i++)
	{
		for(j=1;j<=N;j++)
		{
			if (j%i == 0) change(&a[j]);
		}
	}
	for (flag=0,i = 1; i <=1001; i++)
	{
		if (a[i] == 0)
			break;
		if (flag == 1)
		{
			flag = 0;
			printf(" ");
		}
		if (a[i] == 1)
		{
			flag = 1;
			printf("%d", i);
		}
	}
	return 0;
}
void change(int *status)
{
	*status = -*status;
}