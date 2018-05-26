#include<stdio.h>

#include<math.h>

int main()

{

	double x, eps, n = 1, p = 1, a, f = 1, t, sum;

	scanf("%lf", &x);

	scanf("%lf", &eps);

	sum = x;

	do

	{

		n++;

		p = p*n;

		n++;

		p = p*n;

		f = -f;

		t = f*pow(x, n) / p;//优先级？

		sum += t;

		a = fabs(sin(x) - sum);

	}

	while (a>eps);

	printf("sin(x)的近似值是%.3lf\n", sum);
	
}