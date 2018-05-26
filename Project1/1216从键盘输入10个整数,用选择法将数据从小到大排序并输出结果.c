/*
编写程序,从键盘输入10个整数,用选择法将数据从小到大排序并输出结果

输入格式：
输入10个整数

输出格式：
排序后输出，每个数字之间用空格分隔

输入样例：
1
5
8
0
4
7
6
3
9
2

输出样例：
0 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
void xuanze(int a[], int n);
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d", a + i);
	xuanze(a, 10);
	for (i = 0; i < 10; i++)
	{
		
		printf(i == 0 ? "%d" : " %d", a[i]);
	}
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