/*��֪sin(x) = x - x ^ 3 / (3!) + x ^ 5 / (5!) - x ^ 7 / (7!)....(-1) ^ n*x ^ (2n + 1) / ((2n + 1)!);
Ҫ������x��eps, ����sin(x)�Ľ���ֵ, Ҫ�����С��eps

�����ʽ��
��������С��

�����ʽ��
�����������������λС����ע����ð�ǵ����š�

����������
5
0.001

���������
sin(x)�Ľ���ֵ�� - 0.959
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
	printf("sin(x)�Ľ���ֵ��%.3lf", sinx2);
	
	return 0;


}
