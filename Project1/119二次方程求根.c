#include<stdio.h> /* p74例题求二次方程的根 */
#include<math.h>
#include<stdlib.h>
int main()
{
	double a, b, c, dalt;
	double x1, x2;
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
				printf("%.2f", x1);
				printf(" %.2f\n", x2);

			}
			else
			{

				printf("无解\n");

			}
		}
	
	system("pause");
	return 0;
}