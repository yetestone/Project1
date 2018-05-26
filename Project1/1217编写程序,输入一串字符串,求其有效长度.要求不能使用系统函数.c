/*
编写程序,输入一串字符串,求其有效长度.要求不能使用系统函数

输入格式：
输入一行字符串

输出格式：
见输出样例，注意半角冒号

输入样例：
abdjhchijh

输出样例：
字符长度为:10
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	gets(a);
	for (i = 0; a[i] != '\0'; i++);
	printf("字符长度为:%d", i);
	return 0;
}