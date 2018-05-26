/*已知sin(x) = x - x ^ 3 / (3!) + x ^ 5 / (5!) - x ^ 7 / (7!)....(-1) ^ n*x ^ (2n + 1) / ((2n + 1)!);
要求输入x与eps, 计算sin(x)的近似值, 要求误差小于eps

输入格式：
输入两个小数

输出格式：
见输出样例，保留三位小数，注意采用半角的括号。

输入样例：
5
0.001

输出样例：
sin(x)的近似值是 - 0.959
*/
#include<stdio.h>

#include<math.h>
 double jiecheng(double a)
{
	 double m;
	if (a == 0)
	{
		m = 1;
		return m;
	}
	m = jiecheng(a - 1)*a;
	return m;
}
int main()
{
	double sinx1, sinx2 = 0, x, eps;
	double i = 0;
	scanf("%lf%lf", &x, &eps);
	sinx1 = sin(x);
	do
	{
		sinx2 = sinx2 + pow(-1.0, i*1.0)*pow(x, (2.0*i) + 1) / jiecheng((2 * i) + 1);
		i++;
	} while (fabs(sinx2 - sinx1) >= eps);
	printf("sin(x)的近似值是%.3lf", sinx2);
	
	return 0;


}
