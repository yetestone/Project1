/*
某小组有5人，从键盘上分别输入他们的学号、姓名、成绩，输出最高者的信息及平均成绩。

（1）运行要求
输入：5人的学号、姓名、成绩，成绩允许小数
输出：成绩最高的人的信息，成绩保留2位小数
（2）程序测试
001  小红  89
002  小明  76
003  小力  87
004  小马  98
005  小亮  76      （输入数据）

004  小马  98.00  85.20 （期望的输出）


输入：
输出：成绩最好的为:004  小马  98.00平均成绩为:85.20
*/
#include<stdio.h>
#include<stdlib.h>
struct grade
{
	int number;
	char name[10];
	double mark;
};
int main()
{
	struct grade class1[5], *c1;
	int i,temp=4;
	double bestmark = 0,ave=0;
	for (c1=class1,i = 0; i < 5; c1++, i++)
		scanf("%d%s%lf", &c1->number, c1->name, &c1->mark);
	c1--;
	bestmark = c1->mark;
	for (; i > 0; i--, c1--)
	{
		ave += c1->mark;
		if (bestmark < c1->mark)
		{
			bestmark = c1->mark;
			temp = i;
		}
	}
	temp--;
	//printf("成绩最好的为:%03d  %s  %.2f平均成绩为:%.2f", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	//printf("\n%03d %s %.2f\n\n %.2f \n\n", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	printf("\n%03d %s %.2f %.2f\n", class1[temp].number, class1[temp].name, class1[temp].mark, ave / 5);
	return 0;
}