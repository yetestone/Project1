#include<stdio.h>

int main()
{
	int a, i;
	float sum;
	scanf("%d", &a);
	for (sum = 0, i = 1; i <= 1000; i++)
	{
		sum = (float)a / i + sum;
	}
	printf("sum=%f", sum);

	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>


/*int main()

{

	float sum = 0, i = 0; int a;

	scanf_s("%d", &a);

	while (i<1000)

	{

		i++;

		sum += a / i;

	}

	printf("sum=%f\n", sum);
	system("pause");

	return 0;

}*/

