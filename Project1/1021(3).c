#include<stdio.h>
#include<stdlib.h>
/*int sushu(int a)
{
	int i;
	for (i=a-1;i!=1; i--)
	{

		if (a%i == 0)
			return 0;
	}
	return 1;
}*/
int main()
{
	int A, B,k,i,countsum=0;
	scanf_s("%d%d", &A, &B);
	for (k = A; k <= B; k++)
	{
		for (i = k - 1; i != 0; i--)
		{

			if (k%i == 0)
				break;
			if (i == 1)
			countsum = 1 + countsum;
		}
	}
	printf("%d", countsum);
	system("pause");
	return 0;
}