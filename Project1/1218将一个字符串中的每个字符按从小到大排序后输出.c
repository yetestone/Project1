/*
编写函数，功能是将一个字符串中的每个字符按从小到大排序后输出


输入格式：一个字符串

输出格式：每个字符按从小到大排序后的字符串

输入样例：
bau

输出样例：
abu
*/
#include<string.h>
#include<stdio.h>
void xuanze(char a[]);
int main()
{
	char a[100];
	gets(a);
	xuanze(a);
	puts(a);
	return 0;
}
void xuanze(char a[])
{
	int i, j, k,n=strlen(a);
	char temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if ((int)a[j] < (int)a[k])k = j;
		if (k != i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}