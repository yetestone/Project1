/*
编写一个函数，功能是移动字符串中的内容：
把前m个字符移到最后，把第m+1个字符移到最前。

输入格式：一个字符串，以及整数m

输出格式：字符移位后的字符串

输入样例：
1234567890
3

输出样例：
4567890123
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]={'\0'};
	int m,longa;
	scanf("%s%d", a, &m);
	longa = strlen(a);
	memmove(a + longa, a, m);
	puts(a+m);
	return 0;
}