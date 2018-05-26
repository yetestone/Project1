#include<stdio.h>
int hua(int n);
int main()
{
	int A, B, i,count=0;
	scanf("%d %d",&A,&B);
	for (i = A; i <= B; i++)
	{
		if (hua(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	if (count == 0)
		printf("no");
}
int hua(int n)
{
	int sum = 0,temp=n,t;
	while (n)
	{
		t = (n % 10);
		sum = t*t*t + sum;
		n /= 10;
	}
	if (temp == sum)
		return 1;
	else
		return 0;
}