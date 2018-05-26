/*
从键盘输入10名学生的成绩后显示其最低分,最高分和平均分

输入格式：
输入10个整数

输出格式：
见输出样例，平均成绩保留2位小数

输入样例：
45
76
87
98
76
65
54
87
98
54

输出样例：
平均成绩是74.00
最高成绩是98
最低成绩是45
*/
#include<stdio.h>
void xuanze(int a[], int n);
int main()
{
	int mark[10],mark_max,mark_min;
	double mark_ave=0;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", mark + i);
	xuanze(mark, 10);
	for (i = 0; i < 10; i++)
	{
		mark_ave += *(mark + i);
	}
	mark_ave /= 10;
	mark_min = mark[0];
	mark_max = mark[9];
	printf("平均成绩是%.2f\n最高成绩是%d\n最低成绩是%d\n", mark_ave, mark_max, mark_min);
	return 0;
}
void xuanze(int a[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[k])k = j;
		if (k != i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}