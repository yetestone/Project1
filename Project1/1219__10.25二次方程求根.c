/*
#include<stdio.h> //p74��������η��̵ĸ� //
#include<math.h>
#include<stdlib.h>
int main()
{
	double a, b, c, dalt;
	double x1, x2, real, imag;
	printf("Please input a��b��c\n");
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


��д������a*x^2+b*x+c=0�ĸ�

�����ʽ��
����������a��b��c

�����ʽ��
���������������޽⣬��ֱ�����:  �÷����޽�

����������
1.2
2.2
0.8

�������
x1=-0.50
x2=-1.33
*/
#include<stdio.h> /* p74��������η��̵ĸ� */
#include<math.h>

int main()
{
	double a, b, c, dalt;
	double x1, x2;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("�÷����޽�\n");
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
				printf("�÷����޽�\n");
		}
	}
	return 0;
}