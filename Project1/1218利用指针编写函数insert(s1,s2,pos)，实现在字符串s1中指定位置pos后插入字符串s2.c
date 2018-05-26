/*
利用指针编写函数insert(s1,s2,pos)，实现在字符串s1中指定位置pos后插入字符串s2。


输入格式：字符串s1、s2和待插入的位置pos
输出格式：经过插入处理后的新字符串

输入样例：
asdfgh
jkl
1

输出样例：
asjkldfgh
*/
#include<stdio.h>
#include<string.h>
void insert(char *s1, char *s2, int pos);
int main()
{
	char s1[50] = { '\0' }, s2[50] = {'\0'};
	int pos;
	gets(s1);
	gets(s2);
	scanf("%d", &pos);
	insert(s1, s2, pos+1);
	puts(s1);
	return 0;
}
void insert(char *s1, char *s2, int pos)
{
	char s3[30] = {" "};
	strcpy(s3, s2);
	strcat(s3, s1 + pos);
	strcpy(s1 + pos, s3);
}