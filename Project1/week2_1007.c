#include<stdio.h>
//#include<math.h>
//double power(double a, int n);
int main()
{
	int a, b,x;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a == 0 && b == 0)
			break;
		x = 1;
		for (; b > 0; b--)
			x = (a*x) % 1000;
		printf("%d\n", x);
	}
	return 0;
}
//double power(double a, int n)
//{
//	double ans;
//	if (n == 0)
//		ans = 1;
//	else
//	{
//		ans = power(a*a, n / 2);
//		if (n % 2 == 1)
//			ans *= a;
//	
//	}
//	return ans;
//
//
//}