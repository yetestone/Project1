/*
输入10个实数,计算并输出这10个数的平均值

输入格式：
输入10个数字

输出格式：
见输出样例，保留两位小数，注意半角冒号

输入样例：
1.1
2.2
3.3
4.4
4.5
6.5
7.6
4.3
2.2
4.5

输出样例：
这10个数的平均值为:4.06

*/
#include<stdio.h>
int main()
{
	double a[10],sum=0;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%lf", a + i);
	for (i = 0; i < 10; i++)
		sum += a[i];
	printf("这10个数的平均值为:%.2f", sum/10);
	return 0;
}