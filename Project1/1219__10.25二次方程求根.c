/*
#include<stdio.h> //p74例题求二次方程的根 //
#include<math.h>
#include<stdlib.h>
int main()
{
	double a, b, c, dalt;
	double x1, x2, real, imag;
	printf("Please input a、b、c\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("It's not quadratic equation\n");
	else
	{
		dalt = b*b - 4 * a*c;
		if (dalt >= 0)
		{
			x1 = (-b + sqrt(dalt)) / (2 * a);
			x2 = (-b - sqrt(dalt)) / (2 * a);
			printf("x1=%.2f\n", x1);
			printf("x2=%.2f\n", x2);

		}
		else
		{
			real = -b / (2 * a);
			imag = sqrt(-dalt) / (2 * a);
			printf("x1=%.2f%+.2fi\n", real, imag);
			printf("x2=%.2f%+.2fi\n", real, -imag);

		}
	}
	system("pause");
	return 0;
}


编写程序，求a*x^2+b*x+c=0的根

输入格式：
输入三个数a，b，c

输出格式：
见输出样例，如果无解，则直接输出:  该方程无解

输入样例：
1.2
2.2
0.8

输出样例
x1=-0.50
x2=-1.33
*/
#include<stdio.h> /* p74例题求二次方程的根 */
#include<math.h>

int main()
{
	double a, b, c, dalt;
	double x1, x2;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("该方程无解\n");
	else
	{
		dalt = b * b - 4 * a*c;
		if (dalt >= 0)
		{
			x1 = (-b + sqrt(dalt)) / (2 * a);
			x2 = (-b - sqrt(dalt)) / (2 * a);
			printf("x1=%.2f\n", x1);
			printf("x2=%.2f\n", x2);
			return 0;
		}
		
		else
		{
				printf("该方程无解\n");
		}
	}
	return 0;
}