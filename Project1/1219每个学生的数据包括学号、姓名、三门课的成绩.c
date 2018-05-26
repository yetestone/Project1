/*
题目描述

有5个学生，每个学生的数据包括学号、姓名、三门课的成绩。数据从键盘输入，要求打印出每个学生的总分、三门课的总平均成绩、以及总分最高的学生数据

输入描述

输入5个学生的数据，每个学生的数据包括学号、姓名、三门课的成绩

输出描述

输出每个学生的总分、三门课的总平均成绩、以及总分最高的学生数据(保留一位小数)

样例输入

201090101 张三 89 88 73201090102 李四 87 55 91201090103 王五 61 94 84201090104 周六 87 71 61201090105 徐七 76 80 90
样例输出

姓名 总分 平均成绩张三 250   83.3李四 233   77.7王五 239   79.7周六 219   73.0徐七 246   82.0总分数最高的学生信息如下：201090101 张三 89 88 73

*/
#include<stdio.h>
double sum(double a[], int n);
int mark_sum_max(struct student group[], int n);
struct student
{
	int id;
	char name[20];
	double score[3];
	double sum;
};
int main()
{
	struct student group[5];
	int i,i_temp;
	for (i = 0; i < 5; i++)
	{
		scanf("%9d%s%lf%lf%lf", &group[i].id,group[i].name,&group[i].score[0],&group[i].score[1],&group[i].score[2]);
		group[i].sum = sum(group[i].score,3);
	}
	i_temp = mark_sum_max(group, 5);
	printf("\n姓名 总分 平均成绩\n");
	for (i = 0; i < 5; i++)
		printf("%s %.0f %.1f\n", group[i].name, group[i].sum, group[i].sum / 3.0);
	printf("总分数最高的学生信息如下:\n");
	printf("%d %s %.0f %.0f %.0f\n", group[i_temp].id, group[i_temp].name, group[i_temp].score[0], group[i_temp].score[1], group[i_temp].score[2]);
	return 0;
}double sum(double a[], int n)
{
	int i;
	double sum=0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int mark_sum_max(struct student group[],int n)
{
	double max = group[0].sum;
	int i,i_temp=0;
	for (i = 1; i < n; i++)
	{
		if (max < group[i].sum)
		{
			max = group[i].sum;
			i_temp = i;
		}
	}
	return i_temp;
}