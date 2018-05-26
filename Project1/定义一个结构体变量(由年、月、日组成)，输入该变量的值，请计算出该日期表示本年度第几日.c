/*
定义一个结构体变量(由年、月、日组成)，
输入该变量的值，请计算出该日期表示本年度第几日。

（1）运行要求
输入：表示年、月、日的三个整数
输出：本年度中的第几天
（2）程序测试
2015 7 29        （输入数据）
210                   （期望的输出）
*/
#include<stdio.h>
struct dayst 
{
	int year;
	int month;
	int day;
	int flag;
};
int main()
{
	struct dayst a;
	int i,allday=0;
	int day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},{ 31,29,31,30,31,30,31,31,30,31,30,31 } };
	scanf("%d%d%d", &a.year, &a.month, &a.day);
	if (a.year % 400 == 0 || (a.year % 4 == 0 && a.year % 100 != 0))
		a.flag = 1;
	else
		a.flag = 0;
	for (i = 0; i < a.month-1; i++)
		allday += day[a.flag][i];
	allday += a.day;
	printf("%d", allday);
	return 0;
}