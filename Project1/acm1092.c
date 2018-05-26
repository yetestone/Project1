#include<stdio.h>
int main()
{
	int sum = 0;
	int input,number;
	int i;
	while (1) {
		scanf("%d", &input);
		if (input != 0)
		{
			for (sum=0,i = 1; i <= input; i++)
			{
				scanf("%d", &number);
				sum += number;
			}
			printf("%d\n", sum);
		}
		else
			return 0;
	}
}