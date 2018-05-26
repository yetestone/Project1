/*
题目描述
有两组数据，分别包含m和n个整数。每组数据中的整数不重复且按由小到大次序排列。
请输出所有在两组数据中同时存在的整数。如果没有这样的数，则输出"NO" 请放心，
(1)每组数据中的整数不重复且按由小到大次序排列，你无需检查，也不必排序。
输入描述
先输入m和n的值，分别表示两组数据的个数，然后输入第一组数据的m个整数，以及第二组数据的n个整数。
输出描述
输出所有在两组数据中同时包含的整数。
样例输入
5  7
5 9 17 123 698
7 8 9 16 17 92 698
样例输出
9 17 698
*/
#include<stdio.h>
int bsrch(int a[], int n, int x);
int main()
{
	int long1, long2,i;
	int a[500], b[500];
	scanf("%d%d", &long1, &long2);
	for (i = 0; i < long1; i++)
		scanf("%d", a + i);
	for (i = 0; i < long2; i++)
		scanf("%d", b + i);
	for (i = 0; i < long1; i++)
	{
		if (bsrch(b, long2, *(a + i)) != -1)
			printf("%d ", *(a + i));
	}
}
int bsrch(int a[],int n,int x)
{
	int lower = 0, upper = n - 1, mid, flag = -1;
	if (x == a[lower])return lower;
	else if (x == a[upper])return upper;
	else
		while (flag == -1 && lower <= upper)
		{
			mid = (lower + upper) / 2;
			if (x == a[mid])
				flag = 1;
			else if (x > a[mid])
				lower = mid + 1;
			else
				upper = mid - 1;
		}
	if (flag == 1)
		return mid;
	else
		return flag;
}