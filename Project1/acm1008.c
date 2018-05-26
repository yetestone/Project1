#include<stdio.h>
int main()
{
	int a[100];
	int input, i,j, time = 0;
	while (1)
	{

		scanf("%d", &input);
		if (input == 0)
			return 0;
		for (i = 0; i < input; i++)
			scanf("%d", a + i);
		time = 0;
		for (j = 0,i=0; j < input; j++)
		{
			if (a[j] > i)
				for (; i != a[j]; i++, time += 6);
			else if (a[j] < i)
				for (; i != a[j]; i--, time += 4);
		}
		time += input * 5;
		printf("%d\n", time);
	}
}//其他算法：计算前后两数的差值，后减前如果大于0，绝对值乘6，小于0，绝对值×4；