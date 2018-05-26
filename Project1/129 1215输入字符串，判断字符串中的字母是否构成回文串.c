/*
题目描述
输入字符串，判断字符串中的字母是否构成回文串。回文串是指字符串的正序与逆序相同的字符串，如“abba”“aba”“aa”都是回文串，而“abbc”“abc”“ac”不是回文串。
输入描述
输入字符串，字符串由字母和其他非字母字符组成，长度不超过80个字符。
输出描述
字母构成回文串，输出"回文串 YES" 字母不构成回文串，输出"字符串 NO"
样例输入
a13b2b3456a
样例输出
accb NO
*/
#include<stdio.h>
#include<string.h>
void reverse(char b[]);
void exchang(char *a, char *b);
int main()
{
	char a[100],b[100],temp_b[200] = "";
	int i, j=0;
	gets(a);
	for (i = 0;1; i++)
	{
		if ((a[i] <= 'z'&&a[i] >= 'a') || (a[i] <= 'Z'&&a[i] >= 'A')||(a[i]=='\0'))
		{
			b[j] = a[i];
			j++;
		}
		if (a[i] == '\0')break;
	}
	strcpy(temp_b, b);
	reverse(temp_b);
	if (strcmp(temp_b, b) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
void reverse(char b[])
{
	int i, j;
	for (i = 0, j = strlen(b) - 1; i == j; i++, j--)
	{
		exchang(&b[i], &b[j]);
	}
}
void exchang(char *a,char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}