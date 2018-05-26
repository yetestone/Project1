#include<stdio.h>
#include<math.h>
int main()
{
	/*double f, c;
	scanf_s("%lf", &c);
	f = (c - 32) * 5 / 9;
	printf("%.2lf", f);
	return 0;
	*/
	double a;
	scanf_s("%lf", &a);
	a = sqrt(fabs(a));
	printf("%.3lf",a);
	return 0;
}