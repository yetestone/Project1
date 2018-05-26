/*
输入一个英文句子，要求将每个单词的第一个字母改成大写字母
题目描述

*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[10][15];
	int i = 0,k;
	do
	{
		scanf("%s", a[i]);
		i++;
	
	} while (getchar()!='\n');
	k = i;
	for (; i > -1; i--)
	{
		a[i][0]=toupper(a[i][0]);
	}
	for (i = 0; i <= k; i++)
		printf(i == 0 ? "%s" : " %s", a[i]);
	return 0;
}