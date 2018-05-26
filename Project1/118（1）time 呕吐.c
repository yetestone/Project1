#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sushu(int a)
{
	int i;
	for (i = 2; i<=sqrt(a); i++)
	{

		if (a%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int A, B, k, countsum = 0;
	scanf_s("%d%d", &A, &B);
	A = (A == 1 ? ++A : A);
	for (k = A; k <= B; k++)
	{
		countsum = sushu(k)  + countsum;
	}
	printf("%d", countsum);
	system("pause");
	return 0;
}