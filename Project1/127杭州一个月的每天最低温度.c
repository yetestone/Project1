/*
题目描述
输入杭州一个月的每天最低温度，计算这个月的平均最低温度，并统计最低温度高于、等于、低于平均最低温度的天数。
输入描述
先输入这个月的天数，再输入这个月每天的最低温度，输入数据之间用空格间隔
输出描述
最低温度 高于、等于、低于 平均最低温度的天数，每个输出数据占一行。
样例输入
31 3 4 1 2 2 4 5 1 -1 2 3 2 -1 -1 -1 1 2 1 2 -2 -2 -2 1 7 5 2 6 7 8 9 12
样例输出
12
7
12
*/
#include<stdio.h>
int main()
{
	int day,i,count_high=0,count_equal=0,count_low=0;
	int c[40],ave;
	scanf("%d", &day);
	for (i = 0; i < day; i++)
	{
		scanf("%d", &c[i]);
	}
	for (i = 0,ave=0; i < day; i++)
	{
		ave+=c[i];
	}
	ave /= day;
	for (i = 0; i < day; i++)
	{
		if (c[i] > ave)count_high++;
		else if (c[i] < ave)count_low++;
	}
	count_equal = day - count_high - count_low;
	printf("%d\n%d\n%d", count_high, count_equal, count_low);
	return 0;
}