#include<stdio.h>
#include<stdlib.h>//数组在函数参数传递的过程中比较困难，采用全局定义的方法解决调用问题
int a[10];
void score()
{
	int i = 0, max, sum=0;
	double ave;
	for (; i <= 9; i++)
	{

		sum = a[i] + sum;
		max = (a[i] >= a[i + 1] ? a[i] : a[i + 1]);
	}
	ave = sum / 10.0;
	printf("%d %d %.2f", max, sum, ave);
}
int main()
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		scanf_s("%d", &a[i]);
	}
	score();
	system("pause");
	return 0;

}
