/*
编写一个程序,给定一个20个元素以内的整数数组，求数组中最大元素的值及下标

输入格式：
输入一行整数，用空格分隔


输出格式：
最大元素值和下标用空格分隔


输入样例：
12 45 67

输出样例：
67 2
*/
/******************************************************************************************************/
//输入一个4x4的二维数组，输出这个数组的最大值以及最大值的下标
/*#include<stdio.h>
int main()
{
	int i, a[4][4], j;
	int maxdata, i_max, j_max;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", *(a + i) + j);
	i_max = 0;
	j_max = 0;
	maxdata = a[0][0];
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (a[i][j]>maxdata)
			{
				maxdata = a[i][j];
				i_max = i;
				j_max = j;
			}
		}
	printf("%d\n[%d][%d]", maxdata, i_max, j_max);
	return 0;
}
/******************************************************************************************************/
#include<stdio.h>
int main()
{
	int a[100];
	int i = 0;
	do {
		scanf("%d", a + i);
		i++;
	} while (getchar() != '\n');
	int maxdata = a[0], i_max = 0;
	for (i--; i > 0; i--)
	{
		if (maxdata < a[i])
		{
			maxdata = a[i];
			i_max = i;
		}
	}
	printf("%d %d\n", maxdata, i_max);
	return 0;
}